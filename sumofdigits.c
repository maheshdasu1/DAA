#include <stdio.h>
int main()
{
    int n, num, sum = 0, rem;
    printf("Enter N value: ");
    scanf("%d", &n);
    printf("Enter %d digit number: ", n);
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("Sum of %d digit number: %d",sum);
    return 0;
}
