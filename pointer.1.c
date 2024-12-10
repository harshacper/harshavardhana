#include<stdio.h>
int main()
{
    int time=5;
    int *ptr=&time;
    int _time=*ptr;
    printf("%d\n",_time);
    printf("%p\n",&time);
    printf("%p\n",*ptr);
    printf("%d\n",*ptr);
    printf("%d\n",*(&time));
    return 0;
    
}