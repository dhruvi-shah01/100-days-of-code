//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main()
{
    int n1, n2, i, k = 0;

    printf("ENTER SIZE OF FIRST ARRAY: ");
    scanf("%d", &n1);

    int a[n1];

    printf("ENTER ELEMENTS OF FIRST ARRAY: ");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("ENTER SIZE OF SECOND ARRAY: ");
    scanf("%d", &n2);

    int b[n2];

    printf("ENTER ELEMENTS OF SECOND ARRAY: ");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    int c[n1 + n2];

    for(i = 0; i < n1; i++)
    {
        c[k] = a[i];
        k++;
    }

    for(i = 0; i < n2; i++)
    {
        c[k] = b[i];
        k++;
    }

    printf("MERGED ARRAY: ");

    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
