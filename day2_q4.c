//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main()
{
    int r;
    float a,c;
    scanf("%d",&r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("AREA = %.2f\n",a);
    printf("CIRCUMFERENCE = %.2f\n",c);
}