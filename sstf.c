#include<stdio.h>
#include<conio.h>
int main(){
	int i,n,min=100,dr[100],head,count=0,d,index,total;
	printf("\n Enter the n value ");
	scanf("%d",&n);
	printf("\n Enter the disk value ");
	for(i=0;i<n;i++){
		scanf("%d",&dr[i]);
	}
	printf("\n Enter the head ");
	scanf("%d",&head);
	while(count!=n){
		for(i=0;i<n;i++){
			d = abs(dr[i]-head);
			if(min>d){
				min = d;
				index = i;
			}
		}
		total+=min;
		head = dr[index];
		dr[index]=1000;
		count++;
	}
	printf("Total %d ",total);
	
}
