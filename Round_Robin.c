#include<stdio.h>
#include<conio.h>
int main(){
	int i,n,qt,count=0,temp,sq=0,bt[100],wt[100],tat[100],rem_bt[100];
	float awt=0,atat=0;
	printf("\n Enter number of process ");
	scanf("%d",&n);
	printf("\n Enter the brust time ");
	for(i=0;i<n;i++){
		scanf("%d",&bt[i]);
		rem_bt[i]=bt[i];
	}
	printf("\n Enter the quantum time ");
	scanf("%d",&qt); 
	while(1){
		for(i=0,count=0;i<n;i++){
			temp=qt;
			if(rem_bt[i]==0){
				count++;
				continue;
			}
			if(rem_bt[i]>qt)
				rem_bt[i]=rem_bt[i]-qt;
			else{
				if(rem_bt[i]>=0){
					temp=rem_bt[i];
					rem_bt[i]=0;
				}
				sq=sq+temp;
				tat[i]=sq;
			}
		}
		if(n==count)
			break;
	}
	printf("\n process_time\tbrust_time\tturn_around_time\twaiting_time\n");
	for(i=0;i<n;i++){
		wt[i]=tat[i]-bt[i];
		awt+=wt[i];
		atat+=tat[i];
		printf("\n %d\t\t%d\t\t%d\t\t %d\t ",i+1,bt[i],tat[i],wt[i]);
	}
	awt = awt/n;
	atat = atat/n;
	printf("\n Average waiting time is %f",awt);
	printf("\n Average turn around time is %f",atat);
}
