#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    }
    return n * factorial(n - 1); 
}

int main() {
    int n,r; 
    printf("enter the number");
    scanf("%d",&n);
    r = factorial(n);
    printf("The factorial of %d is: %d\n", n, r);

}
