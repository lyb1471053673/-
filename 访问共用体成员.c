//成员访问运算符是共用体变量名称和我们要访问的共用体成员之间的一个句号。
//您可以使用 union 关键字来定义共用体类型的变量。
//下面的实例演示了共用体的用法：
#include <stdio.h>
#include <string.h>
 
union Data
{
   int i;
   float f;
   char  str[20];
};
 
int main( )
{
   union Data data;        

   data.i = 10;
   data.f = 220.5;
   strcpy( data.str, "C Programming");

   printf( "data.i : %d\n", data.i);
   printf( "data.f : %f\n", data.f);
   printf( "data.str : %s\n", data.str);

   return 0;
}
