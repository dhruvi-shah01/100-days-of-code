//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include <stdio.h>
int main() 
{
    char string[100];
    printf("Enter a string: ");
    fgets(string,sizeof(string),stdin); 

    for (int i=0;string[i]!='\0';i++)
     {
        if (string[i]!='\n')
        { 
            printf("%c\n", string[i]);
        }
    }

    return 0;
}