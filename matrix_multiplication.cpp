/*C program for matrix multiplication*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,m,n,p,q,a[10][10],b[10][10],c[10][10];
	printf("Enter the order of matrix A\n");
	scanf("%d%d",&m,&n);
	printf("Enter the order of matrix B\n");
	scanf("%d%d",&p,&q);
	if(n!=p)
{
	printf("Multiplication is not possible\n");
	exit(0);
}
	printf("Enter the elements for Matrix A\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++) 
		{
			scanf("%d",&a[i][j]);
		}	
	}
	printf("Enter the elements for Matrix B\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++) 
		{
			scanf("%d",&b[i][j]);
		}	
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++) 
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]= c[i][j]+a[i][k]*b[k][j];
			}
		}	
	}
	printf("\nMatrix A\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++) 
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");	
	}
	printf("\nMatrix B\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++) 
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");	
	}
	printf("\nMatrix C\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++) 
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");	
	}
}
