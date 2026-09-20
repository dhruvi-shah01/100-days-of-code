//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>
int main()
{
    int i;
    char string[100];
    printf("ENTER THE STRING: ");
    fgets(string,sizeof(string),stdin);

    for (i=0;string[i]!='\0';i++) 
    {
        if (string[i]>='a'&&string[i]<='z') 
        {
            string[i] = string[i]-32; 
        }
    }

    printf("Uppercase string: %s\n", string);
    return 0;
}