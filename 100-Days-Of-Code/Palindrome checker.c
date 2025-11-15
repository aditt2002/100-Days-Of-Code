#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "LEVEL";
    int n = strlen(str);
    int flag = 1;
 
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            flag = 0;
            break;
        }
    }
   
    if (flag)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}
