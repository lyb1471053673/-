//�������������Լ����շת�������
//���b���� 0�����������a�������Լ���� 
//���򣬼���a����b����������a����b����a�����Ǹ�ϵ���� 
// �ص���һ���� 
#include<stdio.h>
int main()
{
	int a,b;
	int t;
	printf("����������������");
	scanf("%d %d",&a,&b);
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
		printf("a=%d,b=%d,t=%d\n",a,b,t);
	}
	printf("���Լ��Ϊ��%d",a);
	return 0;
}
