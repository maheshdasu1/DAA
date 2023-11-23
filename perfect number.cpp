#include <stdio.h>
int main()
{
	int n, sum=0, i=1;
	printf("enter the number");
	scanf("%d",&n);
	while(n>i)
	{
		if(n%i==0)
		sum=sum+i;
		i++;
	}
		if(n==sum)
		printf("%d is a perfect number",n);
		else
		printf("%d is not a perfect number",n);
	
}