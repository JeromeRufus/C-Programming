#include<stdio.h>
#include<conio.h>
struct process{
	int arrvtime;
	int servtime;
};
void main(){
	int i,j,n,time,tt,temp;
	float ntt;
	struct process p[50];
	printf("\n Enter the no.of.process ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Enter the process time and service time \n");
		scanf("%d%d",&p[i].arrvtime,&p[i].servtime);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(p[i].arrvtime>p[j].arrvtime){
				temp = p[i].arrvtime;
				p[i].arrvtime = p[j].arrvtime;
				p[j].arrvtime = temp;
			}
		}
	}
	for(i=0;i<n;i++){
		time+=p[i].servtime;
		tt = time-p[i].arrvtime;
	//	wt = tt-p[i].servtime;
		ntt = tt/p[i].servtime;
		printf("\n process %d \t arrival_time %d\t service_time%d\t finish_time%d\t tt%d\t ntt%f\t \n",(i+1),p[i].arrvtime,p[i].servtime,time,tt,ntt);
		
	}
	
	
}
