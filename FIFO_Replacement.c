#include<stdio.h>
void main(){
	int i,j,k,f,pf=0,count=0,rs[25],m[10],n,ph=0;
	printf("\n Enter the length of reference string ");
	scanf("%d",&n);
	printf("\n Enter the reference string ");
	for(i=0;i<n;i++){
		scanf("%d",&rs[i]);
	}
	printf("\n Enter no.of.frames ");
	scanf("%d",&f);
	for(i=0;i<f;i++){
		m[i]=-1;
	}
	printf("\n The page Replacement process is \n ");
		for(i=0;i<n;i++){
			for(k=0;k<f;k++){
				if(m[k]==rs[i]){
					break;
				}
			}
			if(k==f){
				m[count++]=rs[i];
				pf++;
			}
			else{
				ph++;
			}
			for(j=0;j<f;j++){
				printf("\t%d",m[j]);
			}
			if(k==f){
				printf("\tPF NO.%d",pf);
			}
			else{
				printf("\tPH NO.%d",ph);
			}
				printf("\n");
			if(count==f){
				count=0;
			}
		}
		
		printf("\n The number of page faults using FIFO are %d ",pf);
		printf("\n The number of page hits using FIFO are %d ",ph);
}
