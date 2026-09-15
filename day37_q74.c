#include <stdio.h>

int main()
{
    int i,j,r,c;

    printf("ENTER THE NUMBER OF ROWS AND COLUMNS: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("ENTER THE ELEMENTS OF THE MATRIX:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("TRANSPOSE OF THE MATRIX:\n");

    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}