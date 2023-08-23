#include<stdio.h>
int main()
{
	int i,j,r,c,m,n,k,a[10][10],b[10][10],d[10][10];
	printf("enter no of rows of 1st  matrix");
	scanf("%d",&r);
	printf("enter no of column of 1st  matrix");
	scanf("%d",&c);
	printf("enter no of rows of 2nd matrix");
	scanf("%d",&m);
	printf("enter no of column of 2nd matrix");
	scanf("%d",&n);
	printf("enter the elements of first matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements of second matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=0;
			for(k=0;k<c;k++)
			{
				d[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",d[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
