#include <stdio.h>
int main()
{
    int num;
    printf("enter  the number:");
    scanf("%d",&num);
    if(num>=-9&&num<=9)
    {
        printf("%d is number",num);
    }
    else 
    {
        printf("%d is not a number",num);
    }
    return 0;
}