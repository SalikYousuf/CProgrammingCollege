#include <stdio.h>
#include <string.h>

int main()
{
    char *p = "pat";
    char *q = p + strlen(p) - 1;  
    while (p < q)  
    {
        if (*p != *q)
        {
            printf("String is not a palindrome\n");
            return 0;  
        }
        p++;
        q--;
    }

    printf("String is a palindrome\n");  
    return 0;
}