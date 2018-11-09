#include <stdio.h>
int main()
{
int m,n; //首先定义两个整数
scanf ("%d%d",&m,&n); //输入两个整数
if (m%n==0) //如果m除于n的余数是0
printf ("YES");
else //如果m除于n的余数不为0
printf ("NO");
return 0; 
}