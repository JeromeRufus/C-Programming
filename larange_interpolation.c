#include<stdio.h>
#include<conio.h>
int main(){
	int i,n,j;
	float x[100],y[100],xp=0,yp=0,p;
	printf("\n Enter the value ");
	scanf("%d",&n);
	printf("\n Enter the x values ");
	for(i=0;i<n;i++){
		printf("x[%d]",i);
		scanf("%f",&x[i]);
		printf("y[%d]",i);
		scanf("%f",&y[i]);
	}	
	printf("\n Enter the interpolation value ");
	scanf("%f",&xp);
	for(i=0;i<=n;i++){
		p=1;
		for(j=1;j<=n;j++){
			if(i!=j){
				p=p*(xp-x[j])/(x[i]-x[j]);
			}
		}
		yp = yp+p*y[i];
	}
	printf("Interpolation value is %0.3f is %0.4f",xp,yp);
}
