#include <stdio.h>

int main() {
    int i, j;

    int n = 6; // Controls the size of the heart

    // Upper part
    for (i = n / 2; i <= n; i += 2) {
        // Left spaces
        for (j = 1; j < n - i; j += 2)
            printf(" ");

        // Left stars
        for (j = 1; j <= i; j++)
            printf("*");

        // Middle spaces
        for (j = 1; j <= n - i; j++)
            printf(" ");

        // Right stars
        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    // Lower part
    for (i = n; i >= 1; i--) {
        // Leading spaces
        for (j = 0; j < n - i; j++)
            printf(" ");

        // Stars in each row
        for (j = 1; j <= i * 2 -1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
