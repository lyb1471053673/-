#include<stdio.h>
int main()
{
	int x;
	printf("������һ������:");
	scanf("%d",&x);
	printf("��������Ľ����:");
	int digit;
	int result=0;
	while(x>0){
		digit=x%10;
		printf("%d",digit);
		result=result*10+digit;
		x/=10;
	}
	return 0;
}
