#include<stdio.h>
int main(){
    int n;
    int A[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    A[n-1]+=1;//���λ��һ
    int j=n-1; //�������С��ֵ��j
    while(1){
        if(A[j]>9){//����������9�����λ�����Ѹ�λ��0
             A[j]=0;
            A[--j]+=1;
            if(j==0&&A[j]==10){// ������λΪ10
                A[0]=0; //��0
                printf("  1 "); //Ȼ���ٴ�ӡһ��1��Ϊ���λ
                break;
            }
        }
        else if(A[j]<10) //�����һλ���ܵ�10����ζ�Ų��ܽ�λ������ѭ��
            break;
    }
     for(int k=0;k<n;k++){
         printf("%d ",A[k]);//��ӡ����
     }
}