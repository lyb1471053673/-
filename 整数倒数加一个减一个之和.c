#include<stdio.h>
int main()
{
	int n;
	int i;
	int sign=1;
	double sum=0.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=sign*1.0/i;
		sign=-sign; 
	}
	printf("f(%d)=%f",n,sum);
	return 0;
 } 
