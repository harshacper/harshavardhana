#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num<=12)
    {
        printf("%d is the valid month number",num);

    }
    else{
        printf("%d is invail month number ",num);
    }
}