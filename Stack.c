#include<stdio.h>
#include<conio.h>
int stack[100],i,n,choice,top,count=0,x,pos,updt,ser;
void push(void);
void pop(void);
void display(void);
void peek(void);
void peep(void);
void update(void);
void search(void);
int main(){
	top=-1;
	printf("\n\tEnter the stack size");
	scanf("%d",&n);
	//stack[n];
	printf("\n\tChoose any operation");
	printf("\n\t 1.Push\n\t 2.Pop\n\t 3.Display\n\t 4.Peek\n\t 5.Peep\n\t 6.UpdateValue\n\t 7.Search\n\t 8.Exitpoint\n\t");
	do{
		printf("\n\t Enter the choice");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				push();
				break;
			}
			case 2:{
				pop();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4:{
				peek();
				break;
			}
			case 5:{
				peep();
				break;
			}
			case 6:{
				update();
				break;
			}
			case 7:{
				search();
				break;
			}
			case 8:{
				printf("\n\t Exit point");
				break;
			}
			default:{
				printf("\n\t Please enter a valid choice (1/2/3/4/5/6/7)");
				break;
			}
		}
	}
	while(choice!=8);
		return 0;
		
}
void push(){
	if(top>=n-1){
		printf("\n\t Stack is overflow");		
	}
	else{
		printf("\n\tEnter the value to push");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop(){
	if(top<=-1){
		printf("\n\t Stack is underflow");
	}
	else{
		printf("\n\t The poped value %d",stack[top]);
		top--;
	}
}
void display(){
	if(top>=0){
		printf("\n\tThe elements in stack");
		for(i=top;i>=0;i--){
			printf("\n\t%d",stack[i]);
		}
	}
	else{
		printf("\n\t stack is empty");
	}
}
void peek(){
	if(top<=-1){
		printf("\n\t Stack is underflow");
	}
	else{
		printf("\n\t top value is %d",stack[top]);
	}
}
void peep(){
	if(top<=-1){
		printf("\n\t Stack is underflow");
	}
	else{
		printf("\n\t Enter the position ");
		scanf("%d",&pos);
		if(pos<=top && pos>=0){
			printf("\n\tThe element of the postion is %d ",stack[pos]);
		}
		else{
			printf("\n\t Positon is invalid");
		}
	}
}
void update(){
	if(top<=-1){
		printf("\n\t stack is underflow");
	}
	else{
		printf("\n\tEnter the position to update value");
		scanf("%d",&pos);
		if(pos<=top && pos>=0){
			printf("\n\tEnter the value to update");
			scanf("%d",&updt);
			stack[pos]=updt;
			display();
		}
		else{
			printf("\n\t Position is invalid");
		}
	}
}
void search(){
	int count=0;
	if(top<=-1){
		printf("\n\t stack is underflow");
	}
	else{
		printf("\n\t Search by value ");
		scanf("%d",&ser);
			for(i=0;i<=top;i++){
				if(ser == stack[i]){
					count++;
				}
			}
			if(count == 1){
				printf("\n\t value is present");
			}
			else{
				printf("\n\t value is not present");
			}
	}	
}

