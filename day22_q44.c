//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>

int main()
{
    int n, i = 1;
    float sum = 0, numerator, denominator;

    scanf("%d", &n);

    while (i <= n)
    {
        if (i == 1)
        {
            sum = sum + 1;
        }
        else
        {
            numerator = 2 * i - 1;
            denominator = 2 * i;

            sum = sum + numerator / denominator;
        }

        i++;
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}