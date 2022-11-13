#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int solution(int size_array,int *arr,int src,int dest)
{
	int i,j,val=0;
	for(i=dest;i<=src;i++){
		for(j=dest+1;j<=src;j++){
			if(arr[i]==arr[j]){
				val++;
			}
		}
	}
	return val; 
}
int main(){
	int testcases;
	printf("\n Enter the testcases ");
	scanf("%d",&testcases);
	while(testcases--){
		int size_array,src,dest;
		printf("\n Size of array ");
		scanf("%d",&size_array);
		int *arr;
		arr = malloc(sizeof(int)*size_array);
		int i=0;
		printf("Enter the values ");
		for(i=0;i<size_array;i++){
			scanf("%d",(arr+i));
		}
		printf("\n src");
		scanf("%d",&src);
		printf("\n dest");
		scanf("%d",&dest);
		printf("solution %d\n",solution(size_array,arr,src,dest));
	}
}
