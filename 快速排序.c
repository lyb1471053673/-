#include<stdio.h>
#define MaxSize 50
typedef int KeyType;
typedef struct{
	KeyType key;
}RecType;
RecType r[MaxSize+1];
int Partition(RecType r[],int low,int high){
	int i,j;
	i=low,j=high;
	r[0].key=r[i].key;
	while(i<j){
		while(i<j&&r[j].key>r[0].key)
		j--;
		r[i]=r[j];
		while(i<j&&r[i].key<=r[0].key)
		i++;
		r[j]=r[i];
	}
	r[j]=r[0];
	return i;
}
void Quick_Sort(RecType r[],int low,int high){
	int u;
	if(low<high){
		u=Partition(r,low,high);
		Quick_Sort(r,low,u-1);
		Quick_Sort(r,u+1,high);
	}
}
void main(){
	RecType a[MaxSize];
	int i,n;
	printf("输入待排序的元素个数:");
	scanf("%d",&n);
	printf("输入%d个位置:");
	      for(i=1;i<=n;i++)
	      scanf("%d",&a[i].key);
	      Quick_Sort(a,1,n);
	      printf("排序结果:");
	            for(i=1;i<=n;i++) 
	            printf("%4d",a[i].key);
	            printf("\n");
}
