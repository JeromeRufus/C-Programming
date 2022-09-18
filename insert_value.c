#include<stdio.h>
void sort();
int main(){
    int array[50];
    int inval,count,size;
    printf("Enter the array size");
    scanf("%d",&size);
    printf("Enter the array values");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
   
    printf("Enter the value to insert on an array");
    scanf("%d",&inval);
    for(int i=0;i<size;i++){
        if(array[i]<inval){
            count++;
        }
        else{
            break;
        }
    }
    for(int i=size-1;i>=0;i--){
        array[i+1] = array[i];
    }
    
    array[count] = inval;

    for(int i=0;i<=size;i++){
        printf("%d\n",array[i]);
    }
    

}