#include<stdio.h>
int main()
{
int n,f1,f2,fib,i;
printf("enter the number");
scanf("%d",&n);
i=1,f1=0,f2=1;
do
{
	fib=f1+f2;
	f1=f2;
	f2=fib;
	i++;
}while(i<=n);
     printf("%d\t",fib);
}
