#include<stdio.h>
int main()
{
	int a[100],i,n,temp,min,j;
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("element of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	min=i;
	 for(j=i+1;j<n;j++)
	  {
	   if(a[j]<a[min])
	    {min=j;
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	    }
      }
    
    }
    printf("the selection sort is \t");
    for(i=0;i<n;i++)
    {
    	printf("%d\t",a[i]);
	}
	
}