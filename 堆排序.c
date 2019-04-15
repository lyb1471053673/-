#include<stdio.h>
#define MaxSize 50
typedef KeyType;
typedef struct{
	KeyType key;
}RecType;
RecType r[MaxSize+1];
void sift(RecType r[],int k,int m){
	int i,j;
	i=k;j=2*i;
	r[0]=r[i];
	while(j<=m){
		if(j<m&&r[j].key<r[j+1].key)j++;
		if(r[0].key<r[j].key)
		{
			r[i]=r[j];i=j;j=2*i;
		 }
		 else break;
	}
	r[i]=r[0];
}
void HeapSort(RecType r[],int n){
	int k,i;
	RecType w;
	for(k=n/2;k>=1;k--)
	sift(r,k,n);
	printf("\n初始堆:");
	for(i=1;i<=n;i++)
	printf("%4d",r[i].key);
	    for(k=n;k>=2;k--){
	    	w=r[k];r[k]=r[1];r[1]=w;
	    	sift(r,1,k-1);
	    	printf("\n排序结果:");
	    	for(i=1;i<=n;i++)
	    	 printf("%4d",r[i].key);
		}
}
void main(){
	RecType a[MaxSize];
	int i,n;
	for(i=1;i<=n;i++){
		printf("%4d",r[i].key);
	}
}
void main(){
	RecType a[MaxSize];
	int i,n;
	printf("输入待排序的元素个数:");
	scanf("%d",&n);
	printf("输入%d个数值",n);
	    for(i=1;i<=n;i++)
	    scanf("%d",&a[i].key);
	    HeapSort(a,n);
	    printf("\n排序结果:");
	         for(i=1;i<=n;i++)
	         printf("%4d",&a[i].key);
	         printf("\n");	
}
