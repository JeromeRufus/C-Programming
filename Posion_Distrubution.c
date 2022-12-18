/*#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int x){
	if(x==0){
		return 1;
	}
	else{
		return x * fact(x-1);
	}
}
int main(){
	float sum=0,product=0,y1[100],mean,f1,po,fo,p1,tot;
	int x[100],y[100],i,n;
	printf("\n Enter the number of step");
	scanf("%d",&n);
	printf("\n Enter the x value");
	for(i=0;i<n;i++){
		printf("\n x[%d] ",i);
		scanf("%d",&x[i]);
	}
	printf("\n Enter the y value");
	for(i=0;i<n;i++){
		printf("\n y[%d] ",i);
		scanf("%d",&y[i]);	
	}
	for(i=0;i<n;i++){
		sum+=y[i];
		product+=x[i]*y[i];
	}
	printf("\n sum is %f",sum);
	printf("\n product is %f",product);
	mean = product/sum;
	po = exp(-mean);
	fo = sum*po;
	printf("\n Excepted Frequency");
	for(i=0;i<n;i++){
		p1 = (po*pow(mean,i))/fact(i);
		f1 = sum*p1;
		y1[i]=f1;
		tot+=y1[i];
		printf("\n y1[%d]",i);
		printf("%.4f",y1[i]);
	}
	printf("\n Total Frequency %0.2f",tot);
}*/



#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int x){
	if(x==0||x==1){
		return 1;
	}
	else{
		return x * fact(x-1);
	}
}
int main(){
	float x[100],y[100],sum,prod,mean,po,fo,p1,f1,y1[100],tot;
	int i,n;
	printf("Enter the size \n");
	scanf("%d",&n);
	printf("Enter the x value ");
	for(i=0;i<n;i++){
		printf("x[%d]\t",i);
		scanf("%f",&x[i]);
	}
	printf("Enter thte y value ");
	for(i=0;i<n;i++){
		printf("y[%d]\t",i);
		scanf("%f",&y[i]);
	}
	for(i=0;i<n;i++){
		sum+=y[i];
		prod+=x[i]*y[i];
	}
	mean=prod/sum;
	po=exp(-mean);
	fo=sum*po;
	printf("\n Execpted Frequency ");
	for(i=0;i<n;i++){
		p1 = (po*pow(mean,i))/fact(i);
		f1=sum*p1;
		y1[i]=f1;
		tot+=y1[i];
		printf("\n y[%d]\t",i);
		printf("%0.3f",y1[i]);
	}
	printf("\n Total frequency %0.3f",tot);
	
}
