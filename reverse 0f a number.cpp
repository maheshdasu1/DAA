#include<stdio.h>
int main()
{
	int r=0,a,n;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		r=r*10+a;
		n=n/10;
	}
	printf("%d is the reverse",r);
	
}