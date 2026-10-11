//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>
int main()
{
    int n,i,j,k,max_sum=0,sum=0;
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &n);
    int arr[n];
    printf("ENTER THE ELEMENTS OF THE ARRAY: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE VALUE OF K: ");
    scanf("%d", &k);
    for(i=0; i<k; i++)
    {
        sum = sum + arr[i];
    }
    max_sum = sum;
    for(i=k; i<n; i++)
    {
        sum = sum - arr[i-k] + arr[i];
        if(sum > max_sum)
        {
            max_sum = sum;
        }
    }
    printf("THE MAXIMUM SUM OF ALL THE SUBARRAYS OF SIZE %d IS %d", k, max_sum);
    return 0;
}