//Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main()
{
    int n, i, element, pos;

    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("ENTER THE ELEMENTS IN SORTED ORDER:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("ENTER THE ELEMENT TO INSERT: ");
    scanf("%d", &element);

    pos = n;

    for(i = 0; i < n; i++)
    {
        if(element < a[i])
        {
            pos = i;
            break;
        }
    }

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