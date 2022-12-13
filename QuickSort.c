#include<stdio.h>
#include<conio.h>
int i,j,n,temp,k,pass=1;
int a[100];
void quickSort(int a[],int first,int last){
	if(first <= last){
		int pivot = first;
		i = first+1;
		j = last;
		while(i<=j){
			while(a[i]<=a[pivot]){
				i++;
			}
			while(a[j]>a[pivot]){
				j--;
			}
			if(i<j){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
			temp = a[pivot];
			a[pivot] = a[j];
			a[j] = temp;
			printf("pass is %d ",pass);
			for(k=0;k<n;k++){
				printf("%d\t",a[k]);
				
			}
			printf("\n");
			pass++;
			quickSort(a,first,j-1);
			quickSort(a,j+1,last);
		}
}
void main(){
	printf("Enter the size of array ");
	scanf("%d",&n);
	printf("\n Enter the values of array ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	quickSort(a,0,n-1);
	printf("\n The final sort is ");
	for(i=0;i<n;i++){
		printf("%d \t",a[i]);
	}
}
