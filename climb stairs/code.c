#include<stdio.h>
int f(int n)
{  
     int p = 1;  
     int q = 2;  
    if (n == 1)
        return 1;  
    else if(n == 2)
        return 2;
    else
    { 
        for(int i = 3; i <=n; i++)
        {
            int tmp = p;//将第一个值p赋给tmp 
            p = q；将第二个值q赋给p
            q = tmp + q;
        }
        return q;
    }
}
int main()
{
    int b;
    scanf("%d",&b);
    printf("%d",f(b));
    return 0;
}
