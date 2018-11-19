#include <stdio.h>
void main()
{
	int M,N,T;
	int i,j;
	scanf("%d %d %d",&M,&N,&T);
	int a[200][200];
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
 
	if(T==0)
	{//左右翻转
		for(i=0;i<M;i++)
		{
			for(j=N-1;j>=0;j--)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
	if(T==1)
	{//上下翻转
		for(i=M-1;i>=0;i--)
		{
			for(j=0;j<N;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
}
