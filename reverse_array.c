#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array");
    scanf("%d",&size);
    int array[50];
    printf("Enter the array values");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    
    for(int i=size-1;i>=0;i--){
        printf("%d\n",array[i]);
    }
    return 0;
}