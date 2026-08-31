//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main()
{
    int num, og, digit, fact, sum = 0, i;

    scanf("%d", &num);

    og = num;

    while (num > 0)
    {
        digit = num % 10;

        fact = 1;
        i = 1;

        while (i <= digit)
        {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;

        num = num / 10;
    }

    if (sum == og)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not strong number");
    }

    return 0;
}