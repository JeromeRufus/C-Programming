#include<stdio.h>
int main(){
    int a =10;
    for(int i=1;i<a;i++){
         if(i==5){
            continue;
        }   
        printf("%d\n",i);
    }
}