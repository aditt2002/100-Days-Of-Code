#include <stdio.h>
 
 
int factorial(int n){
    int result = 1;
    for (int i = 2; i <= n; i++){
        result *= i;
    }
    return result;
}
 
 
int main(){
    int userValue;
 
    printf("Enter the number for which you want the factorial: ");
    scanf("%i", &userValue);
    printf("\nThe factorial of %i is %i\n", userValue, factorial(userValue));
 
 
    return 0;
}