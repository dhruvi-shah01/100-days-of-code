#include <stdio.h>

int main()
{
    int n, i, largest, second;

    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d", &n);

    int a[n];

    printf("ENTER THE ELEMENTS:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    second = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("SECOND LARGEST ELEMENT = %d", second);

    return 0;
}