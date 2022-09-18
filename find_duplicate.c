#include<stdio.h>
int main(){
    int array[50];
    int size,count;
    printf("Enter the size of array");
    scanf("%d",&size);
    printf("Enter the values of array");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[j] == array[i]){
                    printf("The duplicate number is%d",array[i]);
                count++;
            }
        }
    }
    printf("duplicate number is%d",count);
    return 0;
}
