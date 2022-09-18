#include<stdio.h>
int main(){
    int array[]={2,7,4,5,9};
    int temp=0;   
     for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++)
        if(array[j]<array[i]){
            temp = array[i];
            array[i]=array[j];
            array[j]=temp;
        }
        printf("Ascending order%d\n",array[i]);
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++)
        if(array[j]>array[i]){
            temp = array[i];
            array[i]=array[j];
            array[j]=temp;
        }
        printf("descending order%d\n",array[i]);
    }

    
}