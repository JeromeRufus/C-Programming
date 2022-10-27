#include<stdio.h>
#include<conio.h>
int main(){
	int p[100],bt[100],wt[100],n,i,j,temp=0,tat[100];
	float awt,atat;
	printf("\n Enter the number of process ");
	scanf("%d",&n);
	printf("\n Enter the process time ");
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	printf("\n Enter the brust time ");
	for(i=0;i<n;i++){
		scanf("%d",&bt[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(bt[j]<bt[i]){
				temp = bt[j];
				bt[j] = bt[i];
				bt[i] = temp;
				
				temp = p[j];
				p[j] = p[i];
				p[i] = temp;	
			}
		}
	}
	printf("process_time\t brust_time\t waiting_time\t turn_around_time\n");
	for(i=0;i<n;i++){
		wt[i]=0;
		tat[i]=0;
		for(j=0;j<i;j++){
			wt[i]+=bt[j];
		}
		tat[i]=wt[i]+bt[i];
		awt=awt+wt[i];
		atat+=tat[i];
		printf("%d\t\t %d\t\t %d\t\t %d\n",p[i],bt[i],wt[i],tat[i]);	
	}
	printf("\n Average Waiting time is %f ",awt/n);
	printf("\n Average Turn Around Time is %f",atat/n);
}
