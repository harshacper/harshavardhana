#include <stdio.h>
int main()
{
    int num;
    printf("enter  the number:");
    scanf("%d",&num);
    if(num>=-99&&num<=99)
    {
        printf("%d is a tow digit  number",num);
    }
    else{
        printf("%d is not a  number",num);
    }
    return 0;
}