#include<stdio.h>
int main()
{
  int n,fac=1,i=1;
  printf("enter the number:");
  scanf("%d",&n);
  if (n>=0){
  for(;i<=n;i++){
  fac=fac*i;
  }
  printf("factorial of %d is %d",n,fac);

  }
else{
printf("factorial of a negative number does not exist");}
return 0;
}