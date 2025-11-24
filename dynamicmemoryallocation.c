#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // allocate memory
    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 0;
    }

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("You entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    // free memory
    free(ptr);
    return 0;
}

