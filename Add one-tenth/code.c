#include<stdio.h>
int main(){
    int n;
    int A[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    A[n-1]+=1;//最低位加一
    int j=n-1; //将数组大小赋值给j
    while(1){
        if(A[j]>9){//如果数组大于9，则进位，并把该位置0
             A[j]=0;
            A[--j]+=1;
            if(j==0&&A[j]==10){// 如果最高位为10
                A[0]=0; //置0
                printf("  1 "); //然后再打印一个1作为最高位
                break;
            }
        }
        else if(A[j]<10) //如果哪一位不能到10，意味着不能进位，跳出循环
            break;
    }
     for(int k=0;k<n;k++){
         printf("%d ",A[k]);//打印数组
     }
}