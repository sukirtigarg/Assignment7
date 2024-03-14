#include <stdio.h>
#include <string.h>
int main()
{
    int j, flag=0;
    char str[100], sstr[100];
    printf("\nEnter the string: ");
    gets(str);
    printf("\nEnter the substring to be searched: ");
    gets(sstr);
    for (int i = 0; i < strlen(str); i++)
    {
        for (j = 0; j < strlen(sstr); j++)
        {
            if (sstr[j] == str[i])
            {
                i++;
                continue;
            }
            else
                break;
        }
        if (j == strlen(sstr))
            flag =1;
        else
            continue;
        }
    if (flag == 1)
        printf("The string is found");
    else
        printf("The string is not found");
    return 0;
}
