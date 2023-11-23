#include <stdio.h>

int binomialCoeff(int n, int k) {
    int C[n + 1][k + 1];
    int i, j;

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= i && j <= k; j++) {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
            
            printf("%d ", C[i][j]); 
        }
        printf("\n"); 
    }
}

int main() {
    int numRows = 7; 
    
    printf("Pascal's Triangle with %d rows:\n", numRows);
    binomialCoeff(numRows - 1, numRows - 1);

    return 0;
}
