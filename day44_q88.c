//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>
int main()
{
    char string[100];
    int i;

    printf("ENTER THE STRING: ");
    fgets(string, sizeof(string), stdin);

    for(i = 0;string[i]!='\0';i++)
    {
        if(string[i]==' ')
        {
            string[i]='-';
        }
    }

    printf("%s", string);
    return 0;
}