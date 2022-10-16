#include<stdio.h>
#include<conio.h>
float f(float x);

float f(float x){
	return sqrt(sin(x)+cos(x));
}
int main(){
	int i;
	float trap,h,sum,lower,upper,interval,x[20],y[20];
	printf("Enter the lowerlimit ");
	scanf("%d",&lower);
	printf("Enter the upperlimit ");
	scanf("%d",&upper);
	printf("Enter the interval ");
	scanf("%d",&interval);
	h=(upper-lower)/interval;
	sum=f(lower)+f(upper);
	for(i=1;i<interval;i++){
		x[i]=lower+i*h;
		y[i]=f(x[i]);
		sum=sum+2*y[i];
	}
	trap=(h/2)*sum;
	printf("Trapezoidal rule %f ",trap);
	
}
