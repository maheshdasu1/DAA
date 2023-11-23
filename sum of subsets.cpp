#include <stdio.h>
void sumOfSubsets(int arr[], int n) {
    int totalSubsets = 1 << n; 

    for (int i = 0; i < totalSubsets; i++) {
        int subsetSum = 0;

        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) 
			{ 
                subsetSum += arr[j];
            }
        }
             printf("Subset %d: Sum = %d\n", i + 1, subsetSum);
    }
}
int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Sum of subsets:\n");
    sumOfSubsets(arr, n);
    return 0;
}
