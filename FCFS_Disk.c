#include<stdio.h>
#include<conio.h>
int main(){
	int n,dr[30],i,at=0,head;
	printf("Enter the n value \n ");
	scanf("%d",&n);
	printf("Enter the disk value \n ");
	for(i=0;i<n;i++){
		scanf("%d",&dr[i]);
	}
	printf("\n Enter the head ");
	scanf("%d",&head);
	for(i=0;i<n;i++){
		at+=abs(head-dr[i]);
		head = dr[i];
	}
	printf("\n Disk seek time %d ",at);
	
}
