//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include <stdio.h>
int main()
{
    int i, j, r, c;

    printf("ENTER THE NUMBER OF ROWS AND COLUMNS: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("ENTER THE ELEMENTS:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("MATRIX:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}