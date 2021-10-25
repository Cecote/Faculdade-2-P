#include <stdbool.h>
#include <stdio.h>
bool check(int a[], int n, int sum) {
    if (sum == 0)
        return true;
    if (n == 0 && sum != 0)
        return false;
    if (a[n - 1] > sum)
        return check(a, n - 1, sum);
    return check(a, n - 1, sum) || check(a, n - 1, sum - a[n - 1]);
}
int main() {
    int a[2] = {2, 3};
    int sum = 5;
    int n = 2;
    if (check(a, n, sum) == true)
        printf("\nFound\n");
    else
        printf("\nNot found\n");
    return 0;
}