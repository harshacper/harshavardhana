#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    int marks[n];
    for(int i=0; i<n; i++);
{
    printf("Enter the %d element\n",i);
    scanf(" %c",&marks[i]);
}
    for(int i=0; i<n; i++)
{
    printf(" %d and %c\n",i,marks[i]);
}
 return 0;

}