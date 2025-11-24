#include <stdio.h>
int main() {
    int temp = 1234, rev = 0;

    // Step 1: Reverse the number
    while(temp!=0){
        rev= temp%10 + rev*10;
        temp= temp/10;
         printf("%d ", rev);
    }
for(; rev != 0; rev /= 10) {
        printf("%d ", rev % 10);
    }

    // Step 2: Print digits

    return 0;
}
