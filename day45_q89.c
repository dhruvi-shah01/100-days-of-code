//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>

int main()
{
    char string[100], c;
    int i, freq= 0;

    printf("ENTER THE STRING: ");
    scanf("%s",string);
    printf("ENTER THE CHARACTER: ");
    scanf(" %c",&c);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]==c)
        {
            freq++;
        }
    }

    printf("%d",freq);
    return 0;
}