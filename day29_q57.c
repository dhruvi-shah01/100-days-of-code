//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("ENTER THE NO. OF ELEMENTS\n");
    scanf("%d",&n);
    int a[n];
    printf("ENTER THE ELEMENTS\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}