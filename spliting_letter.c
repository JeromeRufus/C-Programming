#include<stdio.h>
int main(){
    char str[] = "Jerome";
    for(int i=0;i<strlen(str);i++){
        printf("Individual word %c\n ",str[i]);
    }
    int length = strlen(str);
    for(int j= length-1;j>=0;j--){
        printf("reverse individual %c\n",str[j]);
    }

}

