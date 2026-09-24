//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include <stdio.h>
int main()
{
    char string[100];
    int i,space=0,digi=0,spec=0;

    printf("ENTER THE STRING: ");
    fgets(string,sizeof(string),stdin);

    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]==' ')
        {
            space++;
        }
        else if(string[i] >= '0' && string[i] <= '9')
        {
            digi++;
        }
        else if(!(string[i]>='A' && string[i]<='Z') || string[i]=='\n' || string[i]>='a' && string[i]<='z')
        {
            spec++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d", space, digi, spec);
    return 0;
}