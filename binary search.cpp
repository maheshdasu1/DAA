#include<stdio.h>
int main()
{
	int n,i,a[100],key,high,low,mid;
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("element of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	 printf("enter the key element");
	 scanf("%d",&key);
	 low=0;
	 high=n-1;
	 while(low<=high)
	 {
	  mid=(low+high)/2;
	  if(key==a[mid])
	  {
	   printf("element is found at %d",mid);
	   break;
	  }
		else if(key<a[mid])
		{
		high =mid-1;}
		else if(key>a[mid])
		{
		low =mid+1;}
	}
	if(key!=a[mid])
	{
		printf("element is not found");
	}
}