#include<stdio.h>
int main()
{
	int i,a[100],n;
	printf("enter number elements to be entered");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("even numbers\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d",a[i]);
		}
		else 
		{
		  continue;
	    }
	}
	printf("\nodd numbers\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			continue;
		}
		else
		{
		  printf("%d",a[i]);
	    }
	}
}
