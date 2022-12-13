#include<stdio.h>
#include<conio.h>
void main(){
	int x[100];
	int i,n,j,k,temp;
	printf("Enter the size of array ");
	scanf("%d",&n);
	printf("\n Enter the values into array ");
	for(i=0;i<n;i++){
		printf("x[%d]",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){	
			if(x[j] > x[j+1]){
				temp = x[j];
				x[j] = x[j+1];
				x[j+1] = temp;
			}
		}
		printf(" pass - %d\t ",i+1);
		for(k=0;k<n;k++){
			printf("%d \t ",x[k]);
		}
		printf("\n");
		
	}
	printf("After sort \n ");
	for(i=0;i<n;i++){
		printf("%d \n ",x[i]);
	}
}
