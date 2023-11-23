#include<stdio.h>
int main()
{
	int i,j,m,n,k,a[100][100],sum;
	printf("enter the size of a row");
	scanf("%d",&m);
	printf("enter the size of a column");
	scanf("%d",&n);
	printf("Enter the coefficieft");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			sum=sum+a[i][j];
		}printf("sum of the %d rows is %d\n",i+1,m);
		sum=0;
	}
	
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
		{
			sum=sum+a[i][j];
		}printf("sum of the %d colomn is %d\n" ,j+1,n);
		sum=0;
	}
	
}