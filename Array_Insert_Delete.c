#include<stdio.h>
#include<conio.h>
void create(void);
void display(void);
void insert(void);
void delete(void);
int indx,i;
int array[100],pos,ins;
int main(){
	create();
	display();
	insert();
	delete();
}
void create(){
	printf("\n\t Enter the size of array ");
	scanf("%d",&indx);
	array[indx];
	for(i=0;i<indx;i++){
		scanf("\t%d",&array[i]);
	}
}
void display(){
	printf("\n The elements in array ");
	for(i=0;i<indx;i++){
		printf("\n%d",array[i]);
	}
}
void insert(){
	printf("\n Enter the position to insert value");
	scanf("%d",&pos);
	if(pos>=0 && pos<=indx){
		for(i=indx;i>=pos-1;i--){
			array[i+1] = array[i];
		}
		printf("\nEnter the value to insert ");
		scanf("%d",&ins);
		array[pos]=ins;
		indx++;
		display();
	}
	else{
		printf("\n Invalid position");
	}
	
}
void delete(){
	printf("\n Enter the position to delete value");
	scanf("%d",&pos);
	if(pos<=indx && pos>=0){
		for(i=pos-1;i<=indx-1;i++){
			array[i] = array[i+1];
		}
		indx--;
		display();
	}
	else{
		printf("\n Invalid position");
	}
}
