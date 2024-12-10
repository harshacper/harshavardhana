#include<stdio.h>
void swap(int *old,int *new){
    int temp=*old;
    *old=*new;
    *new=temp;
    printf("swaped %d\n %d\n",*old,*new);

    }
    int main(){
        int a=5,b=10;
        printf("before swap");
        printf("%d %d ",a,b);
        printf("after swap");
        swap(&a,&b);
       
    }
    
