#include<stdio.h>
#define MaxSize 50
typedef int KeyType;
typedef struct{
	KeyType key;
}RecType;
RecType r[MaxSize+1];
void Merge(RecType r[],int low,int high,int m){
	RecType temp[100];
	int i,j,k;
	for(i=low;i<=high;i++)
	temp[i].key=r[i].key;
	i=low;j=low+m;k=low;
	while(i<low+m&&j<=high){
		if(temp[i].key<=temp[j].key)
		r[k++].key=temp[i++].key;
		else
		r[k++].key=temp[j++].key;
	}
	if(i>=low+m)
	  while(j<high)r[k++].key=temp[j++].key;
	else
	  while(i<low+m)r[k++].key=temp[j++].key;
}
void Mege_Sort(RecType r[],int n){
	int length,low,high;
	low=1;length=1;
	while(length<n){
		high=(n<low+2*length-1)?n:low+2*length-1;
		Merge(r,low,high,length);
		if(high+length<n)
		low=high+1;
		else
		{
			length=length*2,low=1;
		 } 
	}
}
void main(){
	RecType a[MaxSize];
	int i,n;
	printf("输入待排序的元素个数:");
	scanf("%d",&n);
	printf("输入%d个数值:",n);
	      for(i=1;i<=n;i++)
	      scanf("%d",&a[i].key);
	      Mege_Sort(a,n);
	      printf("\n排序结果:");
	           for(i=1;i<=n;i++)
	           printf("%4d",a[i].key);
	           printf("\n");
}
