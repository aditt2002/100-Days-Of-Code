#include <stdio.h>

long long factorial(int n) {
    if (n < 0) {
        return -1; // Indicate an error for negative numbers
    }
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    char choice;

    do {
        printf("Enter the number for which you want the factorial: ");
        scanf("%d", &num);
        
        long long result = factorial(num);

        if (result != -1) {
            printf("The factorial of %d is %lld\n", num, result);
        } else {
            printf("Factorial is not defined for negative numbers.\n");
        }

        printf("Do you want to find the factorial of another number? (0 - no, anything else - yes)");
        scanf(" %c", &choice); // Note the space before %c to consume the newline character

    } while (choice != '0');

    return 0;
}