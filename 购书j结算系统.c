#include<stdio.h>
int main()
{
	char c;
	float money=0.0;
	for(;;)
	{
		printf("�������Ƿ���н���(Y��y��ʾ���н��㣬N��n��ʾ��������):\n");
		scanf("%c",&c);
		if(c=='Y'||c=='y')
		{
			break;
		}
		else if(c=='N'||c=='n')
		{
			float price;
			int num;
			printf("����ͼ��ĵ���:");
			scanf("%f",&price);
			getchar();
			printf("����ͼ��Ĺ�������:");
			scanf("%d",&num);
			getchar();
			if(price<=0.0||num<0)
			{
				printf("�����������������\n");
				continue;
			}
			money+=price*num;
		}
	}
	printf("���ι����ͼ���ܼ�:%.2f\n",money);
	return 0;
}
