#include <stdio.h>
#include <stdlib.h>

void subsetsum(int arr[], int l, int n, int sum);

int main() {
    int arr[2] = {2, 3};
    int n = 2;

    subsetsum(arr, 1, (n - 1), arr[0]);

    return 0;
}

void subsetsum(int arr[], int l, int n, int sum) {
    if (l > n) {
        // printf("l: %d ", l);
        printf("Soma: %d ", sum);
        return;
    }
    //               2            2+3 = 5
    //               1            0+2 = 2
    subsetsum(arr, l + 1, n, sum + arr[l]);
    // printf("ola ");

    subsetsum(arr, l + 1, n, sum);
    // printf("ola 2 ");
}