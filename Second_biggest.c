#include<stdio.h>
int main(){
    int big1=0,big2=0;
    int result,size;
    int array[50];
    printf("Enter the size");
    scanf("%d",&size);
    printf("Enter the values%d\n",size);
    int i=0;
    while (i<size)
    {
        scanf("%d",&array[i]);
        i++;
    }
    i=0;
    while (i<size)
    {
        if(array[i]>big1){
            big1 = array[i];
        }
        i++; 
    }
    i=0;
    while (i<size)
    {
        if(array[i]!=big1){
            if(array[i]>big2){
                big2=array[i];
            }
            i++;
        }

    }


    printf("biggest number is %d\n",big1);
    printf("Second biggest number is %d",big2);
    return 0;
}