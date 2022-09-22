#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(double x){
    //return(1/(1+x*x));
    //return log(x);
    //return sin(x);
    return exp(x);
}

int main(){
    int i,n;
    float h,upp,low,sum=0.0,sum1=0.0,sum2=0.0,x[20],y[20],trap,simp13,simp38;
    printf("\n\t Enter the lowerlimit,upperlimit,no.of.intervals\n");
    scanf("%f %f %d",&low,&upp,&n);
    h = (upp-low)/n;
    printf("h value is %f",h);
    sum =f(low)+f(upp);//simpson1/3
    sum1 = sum;
    sum2 = sum;
    for(i=1;i<n;i++){
    	x[i] = low+i*h;
    	y[i] = f(x[i]);
    	sum = sum + 2*y[i];
    	if((i%2)==0){
    		sum1 = sum1+2*y[i];
		}
		else{
			sum1 = sum1+4*y[i];
		}
		if((i%3)==0){
			sum2 = sum2+2*y[i];
		}
		else{
			sum2 = sum2+3*y[i];
		}
	}
	trap = (h/2)*sum;
	simp13 = (h/3)*sum1;
	simp38 = ((3*h)/8)*sum2;
	printf("\n\t trapzodial rule %f",trap);
	printf("\n\t simpson1/3 rule %f",simp13);
	printf("\n\t simpson3/8 rule %f",simp38);
}
