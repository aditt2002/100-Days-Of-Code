#include <stdio.h>
 
int main(){
 
    int x = 10;
 
    for(int i = 0;i < 20; i++){
        int x = i * 5;
        printf("Value of X: %d \n", x);
    }
    printf("Value of x again is: %d\n", x);
    return 0;
}