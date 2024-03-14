#include <stdio.h>
#include <string.h>
int main()
{
    int n, flag=0;
    char x;
    char str[100];
    printf("\nEnter the string: ");
    gets(str);
    n = strlen(str);
    printf("\nEnter a character: ");
    scanf("%c",&x);
    for( int i=0; i<n; i++ )
    {
        if( x== str[i] )
        flag++;
    }
    printf("\nFrequency of %c is %d\n", x, flag);
}