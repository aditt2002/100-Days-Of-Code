#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int largest, secondLargest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("An array must have at least two elements to find the second largest.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = INT_MIN;
    secondLargest = INT_MIN;
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element in the array is: %d\n", secondLargest);
    }

    return 0;
}