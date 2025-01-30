#include <stdio.h>

int main() {
    int a, b, sum;
    int *ptr1, *ptr2;  
   
    printf("Enter the first integer: ");
    scanf("%d", &a);
    
    printf("Enter the second integer: ");
    scanf("%d", &b);


    ptr1 = &a;
    ptr2 = &b;

    
    sum = *ptr1 + *ptr2;

    
    printf("The sum of %d and %d is %d\n", *ptr1, *ptr2, sum);

    return 0;
}
