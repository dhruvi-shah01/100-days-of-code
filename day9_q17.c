//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include<math.h>
int main()
{
  float a,b,c,disc,r1,r2;
  scanf("%f %f %f",&a,&b,&c);
  disc=b*b-4*a*c;
  if (disc>0)
  {
    r1=(-b+sqrt(disc))/(2*a);
    r2=(-b-sqrt(disc))/(2*a);
    printf("ROOTS ARE REAL AND DIFFERENT: %.0f, %.0f",r1,r2);
  }
  else if (disc==0)
  {
    r1=-b/(2*a);
    printf("ROOTS ARE REAL AND SAME: %.0f",r1);
  }
  else
  {
    printf("ROOTS ARE COMPLEX");
  }
  return 0;
}
