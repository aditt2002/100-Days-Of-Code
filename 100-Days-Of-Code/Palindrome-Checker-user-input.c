#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int flag = 1;
    printf("Enter a word to check if it's a palindrome: ");
    scanf("%s", str);
        int n = strlen(str);
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            flag = 0;
            break;
        }
    }
    printf("Total characters in the word: %d\n", n);
    if (flag)
    {
        printf("%s is a palindrome.\n", str);
    }
    else
    {
        printf("%s is not a palindrome.\n", str);
    }
    return 0;
}