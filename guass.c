#include<stdio.h>
#include<conio.h>
int main(){
	 float a[100][100],x[100],ratio;
	 int n,i,j,k;
	 printf("\n Enter the n values ");
	 scanf("%d",&n);
	 printf("\n Enter the values ");
	 for(i=1;i<=n;i++){
	 	for(j=1;j<=n+1;j++){
	 		printf("x[%d][%d]",i,j);
	 		scanf("%f",&a[i][j]);
		 }
	 }
	 for(i=1;i<=n;i++){
	 	if(a[i][i]==0.0){
	 		printf("\n Mathematical ");
	 		
		 }
		 	for(j=i+1;j<=n;j++){
		 		ratio = a[j][i]/a[i][i];
		 		for(k=1;k<=n+1;k++){
		 			a[j][k] = a[j][k]-ratio*a[i][k];
				 }
			 }
	 }
	 x[n]=a[n][n+1]/a[n][n];
	 
	 for(i=n-1;i>=1;i--){
	 	x[i]=a[n][n+1];
	 	for(j=1;j<n;j++){
	 		x[i]=x[i]-a[i][j]*x[j];
		 }
		 x[i]=x[i]/a[i][i];
	 }
	 for(i=1;i<=n;i++){
	 	printf("x is %d = %0.f\n ",i,x[i]);
	 }
	 
}
