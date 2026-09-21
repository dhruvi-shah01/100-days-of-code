//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string[100], reversestring[100];
    int i,l;

    printf("ENTER THE STRING: ");
    scanf("%s",string);

    l=strlen(string);
    
    for(i=0;i<l;i++)
    {
        reversestring[i] = string[l-i-1];
    }
    reversestring[l]='\0';
    
    if(strcmp(string,reversestring) == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}