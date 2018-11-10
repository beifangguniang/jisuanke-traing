#include<stdio.h>
#include<stdlib.h>
int removeElement(int A[],int n,int elem); 
void main()
{
	int *A;
	int i=0;
	int n,elem;
	scanf("%d",&n);
	A=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	scanf("%d",&elem);	
	printf("%d\n",removeElement(A,n,elem));
}
int removeElement(int A[],int n,int elem)
{
	int index=n;
	for(int j=0;j<n;j++)
	{
		if(elem==A[j])
			index--;	
	}	
	return index;
}
