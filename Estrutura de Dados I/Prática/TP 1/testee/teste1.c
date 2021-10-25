#include <stdio.h>
#include <stdlib.h>

void subsetsum(int arr[], int l, int n, int sum, int comp);

int main() {
    int arr[2] = {2, 3};
    int n = 2;
    int comp = 5;

    subsetsum(arr, 0, (n - 1), 0, comp);

    return 0;
}

void subsetsum(int arr[], int l, int n, int sum, int comp) {
    if (l > n && sum == comp) {
        // printf("l: %d ", l);
        printf("soma %d ", sum);
        return;
    }
    //               2            2+3 = 5
    //               1            0+2 = 2
    subsetsum(arr, l + 1, n, sum + arr[l], comp);
    // printf("ola ");
    subsetsum(arr, l + 1, n, sum, comp);
    // printf("ola 2 ");
}