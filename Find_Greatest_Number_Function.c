#include<stdio.h>
#include<conio.h>
void greatest(int a,int b);
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    greatest(num1,num2);
}
void greatest(int a,int b){
    if(a>b){
        printf("A is greatest number %d",a);
    }
    else{
        printf("B is greatest number %d",b);
    }
}
