#include <stdio.h>
int power(int x,int y)
{
    int power(int x, int y);
    return x*power(x,(y-1));
}
int main()

{
    int x,y;
    printf("enter the number:");
    scanf("%d",&x);
    printf("enter the exponent:");
    scanf("%d",&y);
    printf("%d^%d=%d",x,y,power(x,y));
    return 0;
    
}