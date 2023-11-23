#include<stdio.h>
int main()
{
	int a[100000],n,i,j,m,p,temp;
	printf("Enter the size of the array\t");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	printf("\nenter the m th minimum position\t");
	scanf("%d",&m);
	printf("\nenter the n th maxmimum position\t");
	scanf("%d",&p);
	printf("min = %d\n",a[m]);
	printf("max = %d",a[p]);
}