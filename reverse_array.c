#include<stdio.h>
int main(){
    int i,size;
    printf("Enter the size of array");
    scanf("%d",&size);
    char array[50];
    printf("Enter the array values");
    for( i=0;i<size;i++){
        scanf("%c",&array[i]);
    }
    for(i=size-1;i>=0;i--){
        printf("%c\n",array[i]);
    }
    return 0;
}
