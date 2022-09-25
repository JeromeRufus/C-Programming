#include<stdio.h>
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
	printf("\n Total Frequency %0.4f",tot);
}
//#include<stdio.h>
//#include<math.h>
//#include<conio.h>
//int fact(int x)
//{
//    if (x==0)
//    return 1;
//else
//    return x*fact(x-1);
//}
//int main()
//{
//    int n,i;
//    float sum=0,prod_x_y=0;
//    int x[10],y[10];
//    float y1[10];
//    float mean1,po,p1,f1,fo;
//    printf("\nEnter the number of values:\n");
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//      printf("x[%d]",i);
//      scanf("%d",&x[i]);
//    }
//    printf("\nEnter the observed values of y\n");
//    for(i=0;i<n;i++)
//    {
//      printf("\ny[%d]",i);
//      scanf("%d",&y[i]);
//    }
//    
//    for(i=0;i<n;i++)
//    {
//      sum+=y[i];
//      prod_x_y+=x[i]*y[i];
//    }
//    printf("\nsum = %f",sum);
//    printf("\nproduct = %f",prod_x_y);
//    mean1=prod_x_y/sum;
//    printf("\nmean=%f",mean1);
//    po=exp(-mean1);
//    fo=sum*po;
//    printf("\nExpected frequency y");
//    for(i=0;i<n;i++)
//    {
//    p1=(po*pow(mean1,i))/fact(i);
//    f1=sum*p1;
//    y1[i]=f1;
//    printf("\ny1[%d]",i);
//        printf("%.4f",y1[i]);
//    }
//    
//    getch();
//}
