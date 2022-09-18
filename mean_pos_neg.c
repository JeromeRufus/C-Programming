#include<stdio.h>
int main(){
    float no,ps=0,ns=0,nm=0,pm=0,p=0,n=0;
    printf("Enter the number\n");
    scanf("%f",&no);
    while(no!=100){
        if(no<0){
            ns = ns+no;
            n++;
        }
        else if(no>0){
            ps = ps+no;
            p++;
        }
        scanf("%f",&no);
    }
    pm = ps/p;
    nm = ns/n;
    printf("Positive mean =%f/nNegative mean=%f/n",pm,nm);
    return 0;


}