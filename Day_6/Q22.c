//Write a program to convert binary to decimal
#include <stdio.h>
#include <math.h>
int main()
{
    int i, n , rem ,sum = 0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        rem = n % 10;
        sum = sum + rem*pow( 2 , i);
        n = n/10;
        i++;
    }
    printf("%d",sum);
}