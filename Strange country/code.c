#include <stdio.h>
#define MAXN 55
char s[MAXN];//������������������ַ�������
char x[MAXN];
char h[MAXN];//����һ������������ַ�������
int main()
{
    gets(s);//��gets() ������ȡ�ַ���
    gets(x);
    int len=strlen(s);//�ж������ַ����ĳ���
    for(int i=0;i<len;i++)//����λ������ж�
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
