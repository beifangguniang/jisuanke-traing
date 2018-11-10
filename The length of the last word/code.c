#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(void)
{
    int len,i,j=0,a=1;
    char s[10000];
    gets(s);
    len = strlen(s);
    for(i=len-1;i>=0;i--)
    {
       if(a&&s[i]==' ')
           continue;
       else if(s[i]!=' ')
       {
           j++;
           a=0;
       }
        else
            break;
    }
    printf("%d",j);
    return 0;
}
