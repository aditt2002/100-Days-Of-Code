#include <stdio.h>
 
 
int factorial(int n){
    if(n <= 0){
        return 1;
    }
    return factorial(n - 1) * n;
}
 
int main(){
    int factorialN;
    int shouldContinue = 0;
 
    do{
        printf("Enter the number for which you want to find the factorial: ");
        scanf("%d", &factorialN);
        printf("\nFor the number %d the factorial is %d\n", factorialN, factorial(factorialN));
 
        printf("\nDo you want to find factorial for another number? (0 - No, anything else for yes): ");
        scanf("%d", &shouldContinue);
 
    }
    while(shouldContinue == 1);
 
    return 0;
}