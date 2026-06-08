//Write a program to print number triangle
/*
1
12
123
1234
12345
*/
#include<stdio.h>
int main()
{
    int i,j,rows=5;
    printf("enter the number rows");
    scanf("%d",&rows);
    
    for(i=1;i<=rows;++i)
    {
        for(j=1;j<=i;++j){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}

