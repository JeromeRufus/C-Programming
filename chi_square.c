#include<stdio.h>
#include<conio.h>
int main(){
	float chical,chitab,tot,e[100][100];
	int i,row,col,j,a[100][100],rowsum[100],colsum[100],sum=0,sum1=0;
	printf("\n Enter the row values ");
	scanf("%d",&row);
	printf("\n Enter the column values ");
	scanf("%d",&col);
	printf("\n Enter the values ");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("x[%d][%d]",i,j);
			scanf("%d",&a[i][j]);   
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			sum=sum+a[i][j];
			rowsum[i]=sum;
		}
	}
	for(j=0;j<col;j++){
		for(i=0;i<row;i++){
			sum1=sum1+a[i][j];
			colsum[j]=sum1;
		}
	}
	printf("\n Rowsum and columnsum ");
	for(i=0;i<row;i++){
		printf("\n row sum %d ",rowsum[i]);
	}
	for(j=0;j<col;j++){
		printf("\n col sum %d ",colsum[j]);
	}
	for(i=0;i<row;i++){
		tot+=rowsum[i];
	}
	printf("\n grand total %f \n",tot);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			e[i][j]=(float)(rowsum[i]*colsum[j])/tot;	
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			chical+=((a[i][j]-e[i][j])*(a[i][j]-e[i][j]))/e[i][j];
		}
	}
	
	printf("\n Excepted frequency ");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("\n Table [%d,%d] %f ",i,j,e[i][j]);
		}
	}
	printf("\n chi square value is %f ",chical);
	printf("\n Enter the table value ");
	scanf("%f",&chitab);
	if(chical<chitab){
		printf("\n Accept HO null hypothesis ");
	}
	else{
		printf("\n reject HO null hypothesis ");
	}
}
//#include<stdio.h>
//
//#include<math.h>
//
//void main() {
//  int row, col, a[150][150], i, j, rowsum[150], colsum[150], sum, sum1, tot = 0, n;
//  float e[100][100], chi = 0.0, tabval;
//  printf("enter no of rows:");
//  scanf("%d", & row);
//  printf("enter no of columns:");
//  scanf("%d", & col);
//  printf("enter the values:\n");
//  for (i = 0; i < row; i++) {
//    for (j = 0; j < col; j++) {
//      scanf("%d", & a[i][j]);
//    }
//  }
//  for (i = 0; i < row; i++) {
//    sum = 0;
//    for (j = 0; j < col; j++) {
//      sum = sum + a[i][j];
//      rowsum[i] = sum;
//    }
//  }
//
//  for (j = 0; j < col; j++) {
//    sum1 = 0;
//    for (i = 0; i < row; i++) {
//      sum1 = sum1 + a[i][j];
//      colsum[j] = sum1;
//    }
//  }
//  printf("Row Sum And Colum sum\n");
//  for (i = 0; i < row; i++) {
//    printf("\nRow sum (%d)%d", i + 1, rowsum[i]);
//  }
//  for (j = 0; j < col; j++)
//    printf("\nColumn sum (%d)%d", j + 1, colsum[j]);
//
//  for (i = 0; i < row; i++) {
//    tot = tot + rowsum[i];
//  }
//  printf("\nGrand Total is => %d", tot);
//  for (i = 0; i < row; i++) {
//
//    for (j = 0; j < col; j++) {
//      e[i][j] = (float)(rowsum[i] * colsum[j]) / tot;
//    }
//
//  }
//  for (i = 0; i < row; i++) {
//    for (j = 0; j < col; j++) {
//      chi += ((a[i][j] - e[i][j]) * (a[i][j] - e[i][j])) / e[i][j];
//    }
//  }
//  printf("\nExpected Frequency :\n");
//  for (i = 0; i < row; i++) {
//    for (j = 0; j < col; j++) {
//      printf("\nTable[%d,%d]%f", i, j, e[i][j]);
//    }
//  }
//  printf("\nChi Square Value=> %f\t", chi);
//  printf("\nEnter the Table Value: ");
//  scanf("%f", & tabval);
//  if (tabval > chi)
//    printf("Reject the NULL Hypothesis");
//
//  else
//    printf("Accept the NULL Hypothesis");
//
//}
