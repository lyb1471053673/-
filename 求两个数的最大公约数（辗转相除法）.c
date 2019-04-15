//求两个数的最大公约数（辗转相除法）
//如果b等于 0，计算结束，a就是最大公约数； 
//否则，计算a除以b的余数，让a等于b，而a等于那个系数； 
// 回到第一步。 
#include<stdio.h>
int main()
{
	int a,b;
	int t;
	printf("请输入两个整数：");
	scanf("%d %d",&a,&b);
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
		printf("a=%d,b=%d,t=%d\n",a,b,t);
	}
	printf("最大公约数为；%d",a);
	return 0;
}
