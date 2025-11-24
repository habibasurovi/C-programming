#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);
    printf("Quotient = %.3f\n", (float)a / b);
    return 0;
}
/**fiboccani n numbers#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("First %d Fibonacci numbers:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}

series upto n numbers
#include <stdio.h>

int main() {
    int limit;
    int a = 0, b = 1, next;

    printf("Enter the limit number: ");
    scanf("%d", &limit);

    printf("Fibonacci series up to %d:\n", limit);

    while (a <= limit) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}

**/


