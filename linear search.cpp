#include<stdio.h>
int main()
{
	int a[100],key, n,i;
	printf("enter the array size");
	scanf("%d",&n);
	printf("enter the array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the key element");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
		   printf("element is found at %d",i);
		   break;
		}
	}
	if(a[i]!=key)
	{
	    printf("element is not found");
    }
	
}