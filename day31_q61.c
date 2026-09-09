//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main()
{
    int n,i,search,flag=0;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d",&n);
    int a[n];
    printf("ENTER THE ELEMENTS OF ARRAY : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER THE ELEMENT TO SEARCH : ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(search==a[i])
        {
            flag=1;
            printf("FOUND AT INDEX %d",i);
            break;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
    return 0;
}
