//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1
*/

#include <stdio.h>
int main()
{
    int num,i,p=0,n=0,z=0;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d",&num);
    int a[num];
    printf("ENTER THE ELEMENTS OF ARRAY : ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
        if(a[i]>0)
        p++;
        else if(a[i]<0)
        n++;
        else
        z++;
    }
    printf("POSITIVE = %d",p);
    printf("\nNEGATIVE = %d",n);
    printf("\nZERO = %d",z);
    return 0;
}