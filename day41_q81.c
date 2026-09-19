//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>
int main()
{
    char string[200];
    int c=0;

    printf("ENTER A STRING- \n");
    fgets(string,sizeof(string),stdin);

    for (int i=0; string[i]!='\0'; i++)
    {
        if (string[i]!='\n')
        {
            c++;
        }
    }

    printf("%d", c);

    return 0;
}