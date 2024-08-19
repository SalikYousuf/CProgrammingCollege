#include <stdio.h>

int main()
{
    char s[30];
    printf("Enter string: ");
    scanf("%[^\n]",s);
    printf("\n%s",s);
   return 0;
}