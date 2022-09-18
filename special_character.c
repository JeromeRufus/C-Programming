#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "I Jerome 644";
    int alphacount,numcount,splcount;

    for(int i=0;i<strlen(str);i++){
    if((str[i]>='a'&& str[i]<='z') || (str[i]>="A" && str<[i]="Z")){
        alphacount++;
    }
    else if(str[i]>=0 && str[i]<=9){
        numcount++;
    }
    else{
        splcount++;
    }
    }

    printf("aplhacount %d\n",alphacount);
    printf("numcount %d\n",numcount);
    printf("splcount %d\n",splcount);



    return 0;
}
