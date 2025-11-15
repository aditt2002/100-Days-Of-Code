#include <stdio.h>

int main() {
    int numbers[5];
    
    int largest, smallest;
    
    printf("Please enter 5 integers:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Enter number #%d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    largest = numbers[0];
    smallest = numbers[0];
    
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    
    printf("\nThe largest element is: %d\n", largest);
    printf("The smallest element is: %d\n", smallest);
    
    return 0;
}