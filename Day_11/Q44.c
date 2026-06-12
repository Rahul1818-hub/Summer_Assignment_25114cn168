//WAP to write function to find factorial
#include<stdio.h>
int main(){
    int result,x;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("Factorial of %d is %d",x,result);
}
int fact(int num)
{
    int fun = 1,i;
    for(i=1;i<=num;i++)
    {
        fun = fun*1;
    }
    return(fun);
}