#include <stdio.h>
#include <string.h>
int main()
{
    int i, j = 0, n, flag =0;
    char str1[100], str2[100];
    printf("\nEnter the string: ");
    gets(str1);
    n = strlen(str1);
    for (i = n - 1; i >= 0; i--)
    {
        str2[j] = str1[i];
        j++;
    }
    for( i=0; i < n; i++ )
    {
        if (str1[i] == str2[i])
        flag ++;
        else break;
    }
    if (flag == n)
        printf("\nString is a palindrome");
    else printf("\nString is not a palindrome");
}