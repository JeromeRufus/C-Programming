#include<stdio.h>
#include<conio.h>
int linearSearch(int arr[],int n,int key);
int main(){
	int i,n,x[100],key;
	printf("Enter the size of array \n");
	scanf("%d",&n);
	printf("\n Enter the value in array ");
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	printf("Enter the key to search ");
	scanf("%d",&key);
	//linearSearch(x,n,key);
	int ind = linearSearch(x,n,key);
	if(ind == -1){
		printf("\n The value is not present ");
	}
	else{
		printf("\n The value is present ");
	}
	
	
}
int linearSearch(int arr[],int n,int key){
	if(n < 0){
		return -1;
	}
	else if(key == arr[n]){
		return n;
	}
	return linearSearch(arr,n-1,key);
}
