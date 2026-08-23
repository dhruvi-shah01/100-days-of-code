//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int main()
{
    int num,i=1,sum=0,odd=1;
    scanf("%d",&num);
    while(i<=num)
    {
        sum=sum+odd;
        odd=odd+2;
        i++;
    }
    printf("%d",&sum);
    return 0;
}