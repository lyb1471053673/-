//����һ��ָ��������ѱ�����ַ��ֵ��ָ�롢����ָ������п��õ�ַ��ֵ��
//��Щ��ͨ��ʹ��һԪ����� * ������λ�ڲ�������ָ����ַ�ı�����ֵ��
//�����ʵ���漰������Щ������ 
#include <stdio.h>

int main ()
{
   int  var = 20;   /* ʵ�ʱ��������� */
   int  *ip;        /* ָ����������� */

   ip = &var;  /* ��ָ������д洢 var �ĵ�ַ */

   printf("Address of var variable: %x\n", &var  );

   /* ��ָ������д洢�ĵ�ַ */
   printf("Address stored in ip variable: %x\n", ip );

   /* ʹ��ָ�����ֵ */
   printf("Value of *ip variable: %d\n", *ip );

   return 0;
}
