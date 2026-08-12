//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main()
{
    float c,f;
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("FAHRENHEIT = %.0f\n",f);
    return 0;
}