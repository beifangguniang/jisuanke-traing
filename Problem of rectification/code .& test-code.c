#include <stdio.h>
int main()
{
int m,n; //���ȶ�����������
scanf ("%d%d",&m,&n); //������������
if (m%n==0) //���m����n��������0
printf ("YES");
else //���m����n��������Ϊ0
printf ("NO");
return 0; 
}