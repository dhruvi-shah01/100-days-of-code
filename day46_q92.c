//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>
int main()
{
    char string[100];
    int i, j;

    printf("ENTER THE STRING: ");
    scanf("%s", string);

    for(i = 0; string[i] != '\0'; i++)
    {
        if(string[i]>='a' && string[i]<='z')
        {
            for(j=i+1;string[j]!='\0';j++)
            {
                if(string[i] == string[j])
                {
                    printf("%c", string[i]);
                    return 0;
                }
            }
        }
    }
    return 0;
}