//Q65: Search in a sorted array using binary search.

#include <stdio.h>

int main()
{
    int n, i, search;
    int low, high, mid, flag = 0;

    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d", &n);

    int a[n];

    printf("ENTER THE ELEMENTS IN SORTED ORDER:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("ENTER THE ELEMENT TO SEARCH: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == search)
        {
            printf("Found at index %d", mid);
            flag = 1;
            break;
        }
        else if(search < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(flag == 0)
    {
        printf("-1");
    }

    return 0;
}