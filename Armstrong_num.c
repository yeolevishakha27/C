#include <stdio.h>

int main() {
    int n, r, s;
    printf("Armstrong numbers are:\n");
    
    for (n = 1; n <= 1000; n++) {
        int x = n; // Initialize x inside the loop for each number
        s = 0;

        while (x != 0) {
            r = x % 10;
            s = s + (r * r * r);
            x = x / 10;
        }

        if (s == n) {
            printf("%d\n", n);
        }
    }

    return 0;
}
