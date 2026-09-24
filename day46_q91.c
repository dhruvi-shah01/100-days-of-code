//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
int main()
{
    char string[100];
    int i;

    printf("ENTER THE STRING: ");
    scanf("%s",string);

    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]!='a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u' && string[i] != 'A' && string[i] != 'E' && string[i] != 'I' && string[i] != 'O' && string[i] != 'U')
        {
            printf("%c", string[i]);
        }
    }
    return 0;
}