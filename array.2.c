#include<stdio.h>
int main()
{
   int a[]={10,50,40,60,80};
   int max=a[0];
   for(int i=1;i<=4;i++)
   {
    if(a[1]>max)
    max=a[1];
   }
   printf("the maximum element in array a is %d",max);
    return 0;
}
