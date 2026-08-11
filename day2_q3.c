//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
    int l,b,a,p;
    scanf("%d",&l);
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
    printf("AREA : %d\n",a);
    printf("PERIMETER : %d\n",p);
    return 0;
}