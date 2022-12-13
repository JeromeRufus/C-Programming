#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int x1,y1,i;
	float x[50],y[50],sum,sum1,mean,mean1,sd,sd1,fcal,ftab;
	printf("\n Enter the no.of.x ");
	scanf("%d",&x1);
	printf("\n Enter the no.of.y ");
	scanf("%d",&y1);
	printf("\n Enter the x values ");
	for(i=0;i<x1;i++){
		scanf("%f",&x[i]);
		
	}
	sum=0.0;
	for(i=0;i<x1;i++){
		sum+=x[i];
		mean=sum/x1;
	}
	sum=0.0;
	for(i=0;i<x1;i++){
		sum+=(x[i]-mean)*(x[i]-mean);	
		sd=sum/(x1-1);
	}
	printf("\n The mean is %f ",mean);
	printf("\n The Standard error is x %0.3f ",sd);
	printf("\n Enter the y values ");
	for(i=0;i<y1;i++){
		scanf("%f",&y[i]);
	}
	sum = 0.0;
	for(i=0;i<y1;i++){
		sum+=y[i];
		mean = sum/y1;
	}
	sum =0.0;
	for(i=0;i<y1;i++){
		sum+=(y[i]-mean)*(y[i]-mean);
		sd1=sum/(y1-1);
	}
	printf("Mean is y is %f ",mean);
	printf("Standard error is %0.3f ",sd1);
	if(sd>sd1){
		fcal = sd/sd1;
	}
	else{
		fcal = sd1/sd;
	}
	printf("The calculated value of f is %0.3f",fcal);
	printf("Enter the table value ");
	scanf("%d",&ftab);
	printf("The number degree of freedom is %d,\t%d \n ",x1-1,y1-1);
	if(fcal>ftab){
		printf("Accepted ");
	}
	else{
		printf("Rejected ");
	}
	
}
