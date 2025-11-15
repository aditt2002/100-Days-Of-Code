#include <stdio.h>

int main() {
    int arr[10];
    int i;

    // Prompt the user to enter 10 integers
    printf("Please enter 10 integers:\n");

    // Read values into the array
    for (i = 0; i < 10; i++) {
        printf("Enter integer #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the array elements in reverse order
    printf("\nYour numbers in reverse order are:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }

    return 0;
}