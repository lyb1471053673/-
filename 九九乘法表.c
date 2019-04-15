#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		printf("%d*%d=%d\t",i,j,i*j);
		printf("\n");
	}
	return 0;
 } 
