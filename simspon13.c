#include<stdio.h>
#include<conio.h>
float f(float x){
	return (x/(1+x+x*x));
}
int main(){
	float lower,upper,h,sum,x[20],y[20],simp13;
	int i,interval;
	printf(" Enter the lowerlimit upperlimit and interval ");
	scanf("%f %f %d",&lower,&upper,&interval);
	h=(upper-lower)/interval;
	sum=f(lower)+f(upper);
	for(i=1;i<interval;i++){
		x[i]=lower+i*h;
		y[i]=f(x[i]);
		if((i%2)==0){
			sum=sum+2*y[i];
		}
		else{
			sum=sum+4*y[i];
		}	
	}
	simp13=(h/3)*sum;
	printf(" Simpson 1/3 %.3f",simp13);
	
}
