#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,n,min,temp,k;
	int arr[n];
	printf("\t Selection Sort \n ");
	printf("Enter the size of array \n ");
	scanf("%d",&n);
	printf("Enter the array values \n ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		min = i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
		printf("\n Pass -> %d ",i+1);
		for(k=0;k<n;k++){
			printf("\t %d \t ",arr[k]);
		}
		printf("\n");
	}
	printf("\n The sorted array is ");
	for(i=0;i<n;i++){
		printf("\t %d \t",arr[i]);
	}
}
