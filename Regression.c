#include<stdio.h>
#include<conio.h>
int main(){
	float x[100],y[100],sumx,sumy,sumsqx,sumsqy,sumxy,denom,a0,a1,denom1,c,d;
	int i,n;
	printf(" Enter the size \n");
	scanf("%d",&n);
	printf("\n Enter the x values ");
	for(i=0;i<n;i++){
		printf("\n x[%d] \t",i);
		scanf("%f",&x[i]);
	}
	for(i=0;i<n;i++){
		printf("\n y[%d] \t",i);
		scanf("%f",&y[i]);
	}
	for(i=0;i<n;i++){
		sumx+=x[i];
		sumsqx+=pow(x[i],2);
		sumy+=y[i];
		sumsqy+=pow(y[i],2);
		sumxy+=x[i]*y[i];
	}
	denom=(n*sumsqx)-(pow(sumx,2));
	denom1=(n*sumsqy)-(pow(sumy,2));
	
	a0=((sumy*sumsqx)-(sumx*sumxy))/denom;
	a1=(n*sumxy-sumx*sumy)/denom;


	d=((sumx*sumsqy)-(sumy*sumxy))/denom1;
	c=(n*sumxy-sumx*sumy)/denom1;
	
	printf("y= %fx+%f\n",a1,a0);
	printf("x= %fy+%f\n",c,d);
	
	
}
