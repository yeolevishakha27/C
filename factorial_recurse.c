#include <stdio.h>

int fact(int n);

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 and 1 is 1
    } else {
        return n * fact(n - 1);
    }
}

int main() {
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int result = fact(n);
    printf("Factorial is %d", result);
    return 0;
}
