#include <stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num>=18)
    {
        printf("%d the person is eligible to vote",num);

    }
    else{
        printf("%d the person is not eligible to vote",num);
    }
    return 0;
}