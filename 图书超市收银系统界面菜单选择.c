#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	printf("ͼ�鳬�й���ϵͳv1.0\n");
	printf("1.ͼ�������Ϣ����\n");
	printf("2.������㴦��\n");
	printf("3.������ʷ��¼\n");
	printf("0.�˳�ϵͳ\n");
	printf("\n��������Ҫ���еĲ���:");
	scanf("%c",&ch);
	switch(ch){
		case '1':
		{
			printf("1.����ͼ��\n");
			printf("2.ɾ��ͼ��\n");
			printf("3.�޸�ͼ��\n");
			printf("4.����ͼ��\n");
			printf("5.һ��ͼ��\n");
			printf("0.������ҳ\n");
			printf("\n");
			break;
		}
		case '2':
		{
			printf("������㴦��\n");
			printf("1.��Ա��¼\n");
			printf("2.�ǻ�Ա����\n");
			printf("0.����\n");
			printf("\n");
			break;
		}
		case '3':
		{
			printf("������ʷ��¼\n");
			break;
		}
		case '0':
		{
			system("cls");
			printf("��л��ʹ�ñ�����������Ϊ��ѧ�汾�����в����ơ�\n");
			break;
		}
		
	}
	return 0;
	
 } 
