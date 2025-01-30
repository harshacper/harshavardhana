#include <stdio.h>

int f1( int x, int y, int z)
  {
    return x+y+z;

  }
 int main()
 {
    int l=100,m=199,n=234,s;
    s=f1(l,m,n);
    printf("sum=%d",s);
    return 0;
 }