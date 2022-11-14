#include<stdio.h>
#include<conio.h>
void binarySearch(int arr[],int first,int last,int key);
int main(){
	int i,n,x[110],key;
	
	printf("Enter the array size \n");
	scanf("%d",&n);
	printf("Enter the array values ");
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	printf("Enter the value to search ");
	scanf("%d",&key);
	int first=0,last = n-1;
	binarySearch(x,first,last,key);

}
void binarySearch(int arr[],int first,int last,int key){
	
	int mid;
	if(first > last){
		printf("\n The value not present ");
	}
	else{
		mid = (first+last)/2;
		if(arr[mid] == key){
			printf("\n The value is present ");
		}
		else if(arr[mid] > key){
			binarySearch(arr,first,mid-1,key);
		}
		else{
			binarySearch(arr,mid+1,last,key);
		}
		
	}
	

}
