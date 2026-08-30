//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>

int main()
{
    int num, i = 1, sum = 0;

    scanf("%d", &num);

    while (i < num)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }

    if (sum == num)
    {
        printf("Perfect number");
    }
    else
    {
        printf("Not perfect number");
    }

    return 0;
}
