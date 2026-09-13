#include <stdio.h>

int main()
{
    int n, i, pos, element;

    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("ENTER THE ELEMENTS:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("ENTER THE POSITION AND ELEMENT: ");
    scanf("%d %d", &pos, &element);

    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = element;

    printf("ARRAY AFTER INSERTION:\n");
    for(i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}