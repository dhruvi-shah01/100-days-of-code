#include <stdio.h>

int main()
{
    int n, i, pos;

    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d", &n);

    int a[n];

    printf("ENTER THE ELEMENTS:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("ENTER THE POSITION TO DELETE: ");
    scanf("%d", &pos);

    for(i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    printf("ARRAY AFTER DELETION:\n");
    for(i = 0; i < n - 1; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}