#include <stdio.h>
#define MAXN 55
char s[MAXN];//定义两个用于输入的字符型数组
char x[MAXN];
char h[MAXN];//定义一个用于输出的字符型数组
int main()
{
    gets(s);//用gets() 函数获取字符串
    gets(x);
    int len=strlen(s);//判断输入字符串的长度
    for(int i=0;i<len;i++)//进行位运算的判断
    {
        if(s[i]==x[i])
            h[i]='1';
        else
            h[i]='0';
    }
   for(int i=0;i<len;i++)
    printf("%c",h[i]);
    printf("\n");
    return 0;
}
