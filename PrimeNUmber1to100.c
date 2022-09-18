#include<stdio.h>
void primeNumber(int n);
int main(){
    int n=100;
    primeNumber(n);
}
void primeNumber(int n){
    int count=0;
    for(int i=1;i<=100;i++){
        for(int j=1;j<=i;j++){
                if(j%i==0){
                    count++;
                }
        }
        if(count == 2){
            printf("%d",i);
        }

    }
}


