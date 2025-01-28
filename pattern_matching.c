#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    printf("Enter a string: ");
    gets(c);
    int i, lenght1 = 0;
    lenght1 = strlen(c);
    char pattern[100];
    printf("Enter a pattern: ");
    gets(pattern);
    int j, length2 = 0;
    length2 = strlen(pattern);
    int count = 0;
    if(lenght1 < length2)
    {
        printf("Pattern is not found in the string\n");
        return 0;
    }
    count = lenght1 - length2 + 1;
    for(i = 0; i < count; i++)
    {
        for(j = 0; j < length2; j++)
        {
            if(c[i + j] != pattern[j])
            {
                break;
            }
        }
        if(j == length2)
        {
            printf("Pattern is found in the string %d\n", i);
            return 0;
        }
    }
    return 0;
}

