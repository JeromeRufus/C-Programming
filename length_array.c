#include<stdio.h>
int main(){
    int length,temp;
    int array[]={100,201,30,410};
    length = sizeof(array)/sizeof(array[0]);
    printf("%d\n",length);
    for(int i=0;i<length;i++){
            for(int j=i+1;i<length;j++){
                        if(array[j]>array[i]){
                            temp = array[i];
                            array[i] = array[j];
                            array[j] = temp;
                        }
            }
            printf("%d\n",array[i]);
    }
}

