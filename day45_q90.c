//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include <stdio.h>
int main()
{
    char string[100];
    int i;

    printf("ENTER THE STRING: ");
    scanf("%s", string);

    for(i = 0;string[i]!='\0';i++)
    {
        if(string[i]>='a'&&string[i]<='z')
        {
            string[i]=string[i]-32;
        }
        else if(string[i]>='A'&&string[i]<='Z')
        {
            string[i]=string[i]+32;
        }
    }
    printf("%s", string);
    return 0;
}