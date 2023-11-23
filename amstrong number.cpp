#include<stdio.h>
int main()
{
	int n,o,r=0,a;
	printf("enter the number");
	scanf("%d",&n);
	o=n;
	while(n>0)
	{
		a=n%10;
		r=r+a*a*a;
		n=n/10;
	}
	if(r==o)
	printf("it is a amstrong numnber",r);
	else
	printf("it is not a amstrong number",r);
	
}