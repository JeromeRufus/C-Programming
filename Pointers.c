#include<stdio.h>

int main(){
    int a =5,b;
    int *p;
    p =&a;
    printf("The memory address is %d\n",p);
    printf("The value of a is %d\n",a);
    printf("The access value of address of %u\n",++*p);
    printf("The value of a again is %d",a);
    getch();
}

