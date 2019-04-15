#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	printf("图书超市管理系统v1.0\n");
	printf("1.图书基本信息管理\n");
	printf("2.购书结算处理\n");
	printf("3.售书历史记录\n");
	printf("0.退出系统\n");
	printf("\n请输入您要进行的操作:");
	scanf("%c",&ch);
	switch(ch){
		case '1':
		{
			printf("1.增加图书\n");
			printf("2.删除图书\n");
			printf("3.修改图书\n");
			printf("4.查找图书\n");
			printf("5.一览图书\n");
			printf("0.返回首页\n");
			printf("\n");
			break;
		}
		case '2':
		{
			printf("购书结算处理\n");
			printf("1.会员登录\n");
			printf("2.非会员进入\n");
			printf("0.返回\n");
			printf("\n");
			break;
		}
		case '3':
		{
			printf("售书历史记录\n");
			break;
		}
		case '0':
		{
			system("cls");
			printf("感谢您使用本软件，该软件为教学版本功能尚不完善。\n");
			break;
		}
		
	}
	return 0;
	
 } 
