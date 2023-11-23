#include<stdio.h>
int main()
{
	int a,n,r=0,o;
	printf("enter the number");
	scanf("%d",&n);
	o=n;
	while(n>0)
	{
		a=n%10;
		r=r*10+a;
		n=n/10;
	}
	if(r==o)
	printf("it is a palindrone number",r);
	else
	printf("it is not a palindrone number",r);

}