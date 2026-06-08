// Write a program to print character triangle
/*
A
AB
ABC
ABCD
ABCDE
*/
#include<stdio.h>
int main()
{
    int i , j , rows = 5;
    printf("Enter the number rows");
    scanf("%d", &rows);
    for(i=1;i<=5; i++)
    {
        for(j = 1;j<=i;i++)
        {
            printf("%d",j+64);
        }
        printf("\n");
    }
    return 0;
}