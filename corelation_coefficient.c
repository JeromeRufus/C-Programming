/*#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int x[100],y[100],i,n;
	float r,nr,dr=0,xx[100],yy[100],sum_x,sum_y,sum_xx,sum_yy,sum_xy,dr_1,dr_2,dr_3;
	printf("\n Enter the number of elements ");
	scanf("%d",&n);
	printf("\n enter the x value");
	for(i=0;i<n;i++){
		printf("\n x[%d]",i);
		scanf("%d",&x[i]);
	}
	printf("\n enter the y value");
	for(i=0;i<n;i++){
		printf("\n y[%d]",i);
		scanf("%d",&y[i]);
	}
	for(i=0;i<n;i++){
		xx[i]=x[i]*x[i];
		yy[i]=y[i]*y[i];
	}
	for(i=0;i<n;i++){
		sum_x+=x[i];
		sum_y+=y[i];
		sum_xx+=xx[i];
		sum_yy+=yy[i];
		sum_xy+=x[i]*y[i];	
	}
	nr = (n*sum_xy)-(sum_x*sum_y);
	float sum_x2 = sum_x*sum_x;
	float sum_y2 = sum_y*sum_y;
	dr_1 = (n*sum_xx)-sum_x2;
	dr_2 = (n*sum_yy)-sum_y2;
	dr_3 = dr_1*dr_2;
	dr = sqrt(dr_3);
	r = (nr/dr);
	printf("\n Total number %d\n Correlation Coefficient %.2f",n,r);
}*/


#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float x[100],y[100],xx[100],yy[100],sum_x,sum_y,sum_x_y,sum_xx,sum_yy,sum_x2,sum_y2,nr,dr_1,dr_2,dr_3,dr,r;
	int i,n;
	printf("\n Enter the n values ");
	scanf("%d",&n);
	printf("\n Enter the x values ");
	for(i=0;i<n;i++){
		printf("x[%d]",i);
		scanf("%d",&x[i]);
	}
	printf("\n Enter the y values ");
	for(i=0;i<n;i++){
		printf("y[%d]",i);
		scanf("%d",&y[i]);
	}
	for(i=0;i<n;i++){
		xx[i]=x[i]*x[i];
		yy[i]=y[i]*y[i];
	}
	for(i=0;i<n;i++){
		sum_x+=x[i];
		sum_y+=y[i];
		sum_xx+=xx[i];
		sum_yy+=yy[i];
		sum_x_y+=x[i]*y[i];
	}
	nr = (n*sum_x_y)-(sum_x*sum_y);
	sum_x2=sum_x*sum_x;
	sum_y2=sum_y*sum_y;
	dr_1=(n*sum_xx)-sum_x2;
	dr_2=(n*sum_yy)-sum_y2;
	dr_3=dr_1/dr_2;
	dr=sqrt(dr_3);
	r=nr/dr;
	printf("\n the total number is %d \t\n Corelation is %f",n,r);
	
	
}
