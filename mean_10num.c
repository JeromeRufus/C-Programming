#include<stdio.h>
int main(){
    int arrayIndex,i=0,sum;
    float result=0;
    int array[arrayIndex];

    printf("Enter The size");
    scanf("%d",&arrayIndex);
    printf("Enter the array values");
    
    while (i<arrayIndex)
    {  
        scanf("%d",&array[i]);
        sum = sum+array[i];
        i++;
    }
   /* i=0;
    while (i<arrayIndex)
    {
        sum = sum+array[i];
        i++;
    }*/
    
    result = sum/arrayIndex;
    printf("Mean of the numbers is %f",result);
    return 0;

    
}