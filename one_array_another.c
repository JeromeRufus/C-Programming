#include<stdio.h>
int main(){
    int size,temp;
    int array[50];
    int secondarray[50];
    
    for(int i=0;i<3;i++){
        printf("1st array is %d\n",array[i]);
        secondarray[i] = array[i];
        
    }
    secondarray[50] = temp;
    for(int j=0;j<3;j++){
     printf("copied%d\n",secondarray[j]);

    }

    return 0;
}