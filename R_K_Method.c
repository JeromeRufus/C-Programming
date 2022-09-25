#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x,float y);
float f(float x,float y){
	return (pow(x,3)+(y/2));
}
int main(){
	int i;
	float xo,yo,xn,n,h;
	float k1,k2,k3,k4,k,yn;
	printf("\n Enter the xO value ");
	scanf("%f",&xo);
	printf("\n Enter the yO value ");
	scanf("%f",&yo);
	printf("\n Enter the calculation point ");
	scanf("%f",&xn);
	printf("\n Enter the number of steps ");
	scanf("%f",&n);
	printf("\n Enter the stepsize ");
	scanf("%f",&h);
	for(i=0;i<n;i++){
		k1 = h*f(xo,yo);
		k2 = h*f((xo+h/2),(yo+k1/2));
		k3 = h*f((xo+h/2),(yo+k2/2));
		k4 = h*f((xo+h),(yo+k3));
		k = ((k1+2*k2+2*k3+k4)/6);
		yn = yo+k;
		printf("\nx%d\ty%d\n",i,i);
		printf("%0.4f\t%0.4f\n",xo,yo);
		xo = xo+h;
		yo = yn;
	}
	printf("\nx%d\ty%d\n",n,n);
	printf("%0.4f\t%0.4f\n",xo,yo);
}
