#include<stdio.h>
#include<conio.h>
float f(float x){
	return log(x);
}
int main(){
	float lower,upper,sum,x[20],y[20],h,simp38;
	int i,interval;
	printf("Enter the lowerlimit upperlimit and interval ");
	scanf("%f %f %d",&lower,&upper,&interval);
	h=(upper-lower)/interval;
	sum=f(lower)+f(upper);
	for(i=1;i<interval;i++){
		x[i]=lower+i*h;
		y[i]=f(x[i]);
		if(i%3==0){
			sum=sum+2*y[i];
		}
		else{
			sum=sum+3*y[i];
		}
	}
	simp38=((3*h)/8)*sum;
	printf("simpson38 %.3f",simp38);
}
