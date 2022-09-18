#include<stdio.h>
int main(){
    int size;
    printf("Enter the size");
    scanf("%d",&size);
    int array[100];
    int sarray[100];
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
        sarray[i] = array[i];

    }
    for(int i=0;i<size;i++){
        if(sarray[i]!=array[i]){
            printf("%d/\n",sarray[i]);
        }
    }
    return 0;
}