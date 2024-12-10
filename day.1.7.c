#include <stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is the even number",num);

    }
    else{
        printf("%d in the odd number",num);
    }
}