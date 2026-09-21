//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    int i;

    printf("ENTER THE STRING");
    fgets(string, sizeof(string), stdin);

    for(i=strlen(string)-1;i>=0;i--)
    {
        if(string[i]!='\n')
        {
          printf("%c", string[i]);
        }
    }
    return 0;
}