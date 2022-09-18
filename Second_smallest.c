#include<stdio.h>
#include<limits.h>
int main(){
    int size,smal=0,ssmal=0;
    int array[] = {11,9,4,6,5};
    int i=0;
    smal=INT_MAX;
    ssmal=INT_MAX;
    while (i<5)
    {
        if(array[i]<smal){
            ssmal = smal;
            smal = array[i];
        }
        i++;
    }
    i=0;
    while (i<5)
    {
        if(array[i]!=smal){
            if (array[i]<ssmal)
            {
                ssmal = array[i];
            }
          i++;
        }
    }
    printf("Tne second smallest number is %d",ssmal);
        

}
