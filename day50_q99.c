//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
int main()
{
    char d[20];
    char *m;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", d);

    if(d[3] == '0' && d[4] == '1')
        m = "Jan";
    else if(d[3] == '0' && d[4] == '2')
        m = "Feb";
    else if(d[3] == '0' && d[4] == '3')
        m = "Mar";
    else if(d[3] == '0' && d[4] == '4')
        m = "Apr";
    else if(d[3] == '0' && d[4] == '5')
        m = "May";
    else if(d[3] == '0' && d[4] == '6')
        m = "Jun";
    else if(d[3] == '0' && d[4] == '7')
        m = "Jul";
    else if(d[3] == '0' && d[4] == '8')
        m = "Aug";
    else if(d[3] == '0' && d[4] == '9')
        m = "Sep";
    else if(d[3] == '1' && d[4] == '0')
        m = "Oct";
    else if(d[3] == '1' && d[4] == '1')
        m = "Nov";
    else 
        m = "Dec";

    printf("%.2s-%s-%s", d, m, d + 6);

    return 0;
}