#include <stdio.h>
int main(void)
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a;
    d=0;
    int f[1000];
    while(a--)
    {
        scanf("%d",f+a);
    }
        for(c=0;c<b;c++)
            {
                if(f[c]!=f[c+1])
                {
                    d++;
                }
            }
        printf("%d\n",d);
    return 0;
}
