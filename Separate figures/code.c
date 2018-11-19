#include<stdio.h>
int main()
{
    int sum[32], n, a;
    for(int i=0; i<32; i++)
    {
        sum[i] = 0;
    }
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a);
        for(int j=0; j<32; j++)
        {
            sum[j]+=a>>j&1;  //取最后一位，累计求和
            sum[j]%=3;   
        }
    }
    int b = 0;
    for(int i=0; i<32; i++)
    {
        b += sum[i]<<i;
    }
    printf("%d\n", b);
}
