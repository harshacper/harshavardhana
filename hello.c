
#include <stdio.h>

int main() 
{
    int i,j,n;
    printf("enter the row number:");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        for(j=0;j<=i;j=j+1)
        {
            printf("%d",(i+j));
        }
    
    printf("\n");
    }
    return 0;
}