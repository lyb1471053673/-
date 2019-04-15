#include<stdio.h>
int main()
{
	char c;
	float money=0.0;
	for(;;)
	{
		printf("请输入是否进行结算(Y或y表示进行结算，N或n表示继续购书):\n");
		scanf("%c",&c);
		if(c=='Y'||c=='y')
		{
			break;
		}
		else if(c=='N'||c=='n')
		{
			float price;
			int num;
			printf("输入图书的单价:");
			scanf("%f",&price);
			getchar();
			printf("输入图书的购买数量:");
			scanf("%d",&num);
			getchar();
			if(price<=0.0||num<0)
			{
				printf("输入错误，请重新输入\n");
				continue;
			}
			money+=price*num;
		}
	}
	printf("本次购书的图书总价:%.2f\n",money);
	return 0;
}
