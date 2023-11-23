#include <stdio.h>
int main() {
    int num1, num2, gcd, lcm, i=1, small;
    printf("Enter 2 integer numbers\n");
    scanf("%d%d", &num1, &num2);
    if (num1 < num2) {
        small = num1;
    } else {
        small = num2;
    }
    for(i=1;i<=small;i++) 
	{
        if (num1%i== 0 && num2 %i == 0) 
		{
            gcd=i;
        }
        
    }
    lcm = (num1 * num2) / gcd;
    printf("GCD = %d\nLCM = %d\n", gcd, lcm);
}