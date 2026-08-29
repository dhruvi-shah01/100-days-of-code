//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main()
{
    int num, digit, i = 0;
    int arr[20];

    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;

        if (digit == 0)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }

        i++;
        num = num / 10;
    }

    i--;

    while (i >= 0)
    {
        printf("%d", arr[i]);
        i--;
    }

    return 0;
}