//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>
int main()
{
    char string[100];
    int v=0,c=0,i;
    printf("ENTER THE STRING: ");
    fgets(string,sizeof(string),stdin);
    for(i=0;string[i];i++)
    {
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||
           string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
        {
            v++;
        }
        else if((string[i]>='a'&&string[i]<='z')||(string[i]>='A'&&string[i]<='Z'))
        {
            c++;
        }
        else
        {
            continue;
        }
    }
    printf("Vowels=%d, Consonants=%d",v,c);
    return 0;
}