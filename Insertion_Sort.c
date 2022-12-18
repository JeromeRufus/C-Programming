#include<stdio.h>
#include<conio.h>
void main(){
	int i,n,j,ind,k,pass=1;
	int a[n];
	printf("\n  Insertion_Sort ");
	printf("Enter the size of array ");
	scanf("%d",&n);
	printf("Enter the array values \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		ind = a[i];
		for(j=i;j>0 && a[j-1]>ind;j--){
			a[j]=a[j-1];
		}
		a[j]=ind;
		printf("Pass is %d",pass);
		for(k=0;k<n;k++){
			printf("%d\t",a[k]);
		}
					printf("\n");
					pass++;

	}
	printf("\n The sorted array ");
	for(k=0;k<n;k++){
		printf("%d\t",a[k]);
	}
	
}
