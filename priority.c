#include<stdio.h>
#include<conio.h>
int main(){
	int bt[100],pr[100],wt[100],tat[100],awt,atat,i,j,pos,n,temp=0;
	printf("\n Enter the number of process ");
	scanf("%d",&n);
	printf("\n Enter the brust time ");
	for(i=0;i<n;i++){
		scanf("%d",&bt[i]);
	}
	printf("\n Enter the priority ");
	for(i=0;i<n;i++){
		scanf("%d",&pr[i]);
	}
	for(i=0;i<n;i++){
		pos=i;
		for(j=i+1;j<n;j++){
			if(pr[j]<pr[pos]){
				pos=j;
			}
		}
		temp = pr[i];
		pr[i] = pr[pos];
		pr[pos] = temp;
		
		
		temp=bt[i];
		bt[i]=bt[pos];
		bt[pos]=temp;
	}
	printf("/n process_time\t\t brust_time\t\t priority\t\t waiting_time\t\t turn_around_time\t\n");
	for(i=0;i<n;i++){
		wt[i]=0;
		for(j=0;j<i;j++){
			wt[i]+=bt[j];
		}
		tat[i]=wt[i]+bt[i];
		awt+=wt[i];
		atat+=tat[i];
		printf("%d\t\t %d\t\t %d\t\t %d\t\t %d\t\n",i+1,bt[i],pr[i],wt[i],tat[i]);
	}
	printf("/n The Average waiting time is %d ",awt/n);
	printf("/n The Average tun around time is %d ",atat/n);
	
}
