#include<stdio.h>
#include<conio.h>
int time[100];
int findLRU(int time[],int n){
		int i,mini = time[0],pos=0;

	for(i=0;i<n;i++){
		if(time[i]>mini){
			mini = time[i];
			pos = i;
		}
	}
	return pos;
}
int main(){
	int n,f,p,frame[100],pages[100],flag1,flag2,i,j,pos,fault,count=0;
	printf("\n Enter the frames ");
	scanf("%d",&f);
	printf("\n Enter the pages ");
	scanf("%d",&p);
	printf("\n Enter the reference string ");
	for(i=0;i<p;i++){
		scanf("%d",&pages[i]);
	}
	for(i=0;i<f;i++){
		frame[i]=-1;
	}
	for(i=0;i<p;i++){
		flag1=flag2=0;
		for(j=0;j<f;j++){
			if(frame[j]==pages[i]){
				count++;
				time[j]=count;
				flag1=flag2=1;
				break;
				
			}
		}
		if(flag1 == 0){
			for(j=0;j<f;j++){
				if(frame[j]==-1){
					count++;
					fault++;
					frame[j]=pages[i];
					time[j]=count;
					flag2=1;
					break;
				}
			}
		}
		if(flag2==0){
			pos = findLRU(time,f);
			count++;
			fault++;
			frame[pos]=pages[i];
			time[pos]=count;
			
		}
		printf("\n");
		for(j=0;j<f;j++){
			printf("%d\t",frame[j]);
		}
	}
	
	printf("\n the total faults is %d ",fault);
}
