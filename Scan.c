#include<stdio.h>
#include<conio.h>
void main(){
	int val,n,i,j,head,left,right,dr[40],temp,d;
	printf("\n Enter the n values ");
	scanf("%d",&n);
	printf("\n Enter the disk values ");
	for(i=0;i<n;i++){
		scanf("%d",&dr[i]);
	}
	printf("\n Enter the head value ");
	scanf("%d",&head);
	printf("\n Enter the start value ");
	scanf("%d",&left);
	printf("\n Enter the end value ");
	scanf("%d",&right);
	printf("\n Enter the direction ");
	scanf("%d",&d);
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(dr[i]>dr[j]){
				temp = dr[i];
				dr[i] = dr[j];
				dr[j] = temp;
			}
		}
	}
	if(d==0){
		val = (head-left)+(left+dr[n-1]);
		printf("\n The access time is %d ",val);
	}
	else if(d==1){
		val = (head-right)+(right-dr[0]);
		printf("\n The access time is %d ",val);
	}
}
