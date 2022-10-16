#include<stdio.h>
#include<conio.h>
float f(float x,float y){
	//return (pow(x,3)+(y/2));
	return (y-(pow(x,2)));
}
int main(){
	float x0,y0,xn,n,h,k1,k2,k3,k4,k,yn;
	int i;
	printf("Enter the x0 value ");
	scanf("%f",&x0);
	printf("Enter the y0 value ");
	scanf("%f",&y0);
	printf("Enter the calculation point xn value ");
	scanf("%f",&xn);
	printf("Enter the number of steps ");
	scanf("%f",&n);
	printf("Enter the step-size ");
	scanf("%f",&h);
	for(i=0;i<=n;i++){
		k1 = h*f(x0,y0);
		k2 = h*f((x0+h/2),(y0+k1/2));
		k3 = h*f((x0+h/2),(y0+k2/2));
		k4 = h*f((x0+h),(y0+k3));
		k  = ((k1+2*k2+2*k3+k4)/6);
		yn=y0+k;
		printf("\n\t x%d\t y%d\n",i,i);
		printf("\n\t %0.4f\t %0.4f\n",x0,y0);
		x0=x0+h;
		y0=yn;
	}
	
}
