#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float mu,sum,sum1,tcal,xbar,se,x[100];
	int i,n,tab;
	printf("\n Enter the population mean ");
	scanf("%f",&mu);
	printf("Enter the sample size ");
	scanf("%d",&n);
	printf("Enter the sample values ");
	for(i=0;i<n;i++){
		scanf("%f",&x[i]);
		sum+=x[i];
	}
	xbar = sum/n;
	for(i=0;i<n;i++){
		sum1+=(x[i]-xbar)*(x[i]-xbar);
	}
	se=sqrt(sum1/(n-1));
	tcal = (xbar-mu)/(se/sqrt(n));
	printf("\n Enter the table val ");
	scanf("%d",&tab);
	if(tcal < tab){
		printf("\n Accepted ");
	}
	else{
		printf("\n Reject ");
	}
}
