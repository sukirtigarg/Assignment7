#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char str[100];
    printf("\nEnter the string: ");
    scanf("%s", str);
    n = strlen(str);
    for(int i = 0; i < n; i++)
    {
        if ((str[i]>=65 && str[i]<=90) || (str[i]>= 97 && str[i]<=122))
        printf("%c", str[i]);
    }
}