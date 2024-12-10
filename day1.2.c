#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter the number:");
    scanf("%d%d",&num1,&num2);
    if(num1==num2)
    {
        printf("the give number is equal",num1,num2);
    }
    else
    {
        printf("the given number is not equal",num1,num2);
    }
    return 0;
}