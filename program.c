#include <stdio.h>

int main() {
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    if(n>=-9&n<=9)
    printf("%d the give number is digit",n);
    else 
        printf("%d the given number not digit ",n);
    return 0;
}