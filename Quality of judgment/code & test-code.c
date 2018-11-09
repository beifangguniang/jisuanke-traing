#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {

        int i,j,n;
        int num = 100;  //1-100之内的质数,如果求1-10000之间的质数，则num=10000
        int a[101];  //数组多定义一个元素是为了让下标和数一一对应，因为数组下标是从0开始的
        for(int i=0; i<=101; i++) {
                a[i] = i;
        }      //初始化数组
        a[1] = 0;   //1不是质数
        for (i=2; i<sqrt(num); i++) {
                for (j=i+1; j<=num; j++) {
                        if (a[j]!=0 && a[j]%i==0) {    //如果是质数了，则不需要再判断
                                a[j] = 0;    //a[j]不是质数，故a[j]=0
                        }
                }
        }  ///依次判断是不是2的倍数，3的倍数，4的倍数......

        for(i=1,n=0; i<=100; i++) {
                if (a[i] != 0) {
                        printf("%d\t", a[i]);
                        if(++n%10 == 0) {
                                printf("\n");
                        }
                }
        }      //输出a[i]不为0的数
        printf("\n");
        return 0;
}
