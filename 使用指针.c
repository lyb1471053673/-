//定义一个指针变量、把变量地址赋值给指针、访问指针变量中可用地址的值。
//这些是通过使用一元运算符 * 来返回位于操作数所指定地址的变量的值。
//下面的实例涉及到了这些操作： 
#include <stdio.h>

int main ()
{
   int  var = 20;   /* 实际变量的声明 */
   int  *ip;        /* 指针变量的声明 */

   ip = &var;  /* 在指针变量中存储 var 的地址 */

   printf("Address of var variable: %x\n", &var  );

   /* 在指针变量中存储的地址 */
   printf("Address stored in ip variable: %x\n", ip );

   /* 使用指针访问值 */
   printf("Value of *ip variable: %d\n", *ip );

   return 0;
}
