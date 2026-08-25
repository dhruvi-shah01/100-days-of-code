//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
 #include <stdio.h>
 int main()
 {
    int num , og , rev=0 , digit ;
    scanf("%d",&num);
    og = num;
    while (num>0)
    {
        digit = num % 10;
        rev = rev * 10 + digit ;
        num  = num / 10;
    }
    if(og == rev)
    {
        printf("PALINDROME");
    }
    else
    {
        printf("NOT A PALINDROME");
    }
 }