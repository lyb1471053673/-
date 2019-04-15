#include<stdio.h>
int main()
{
	int x;
	printf("请输入一个整数:");
	scanf("%d",&x);
	printf("倒序输出的结果是:");
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
