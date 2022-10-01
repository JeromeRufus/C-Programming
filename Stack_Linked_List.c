#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node *p,*newnode;
struct node *top = NULL;
int choice,item,upt,pos;

void push(void);
void pop(void);
void display(void);
void peek(void);
void update(void);
void search(void);
int main(){
	printf("\n Choose the operation ");
	printf("\n\t 1.push\n\t 2.pop\n\t 3.display\n\t 4.peek\n\t 5.update\n\t 6.search\n\t");
	do{
		printf("\n\t Enter the choice ");
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
				update();
				break;
			}
			case 6:{
				search();
				break;
			}
			case 7:{
				printf("\n Exit point");
				break;
			}
			default:{
				printf("\n\t Please choose the choice 1/2/3");
				break;
			}
		}
	}while(choice!=7);
}


void push(){
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("\n Enter the data to inserted");
	scanf("%d",&item);
	newnode->data = item;
	if(top == NULL){
		newnode->next = NULL;
		top = newnode;
	}
	else{
		newnode->next = top;
		top = newnode;
	}
}
void pop(){
	if(top == NULL){
		printf("\n stack is underflow");
	}
	else{
		p=top;
		top = p->next;
		printf("The element deleted in stack %d",p->data);
		free(p);
	}
}
void display(){
	if(top == NULL){
		printf("\n stack is underflow");
	}
	else{
		p=top;
		while(p!=NULL){
			printf("\n The element in stack is %d",p->data);
			p=p->next;
		}
	}
}
void peek(){
	if(top==NULL){
		printf("\n stack is underflow");
	}
	else{
		p=top;
		printf("\n The peek value in stack is %d",p->data);
	}
}
void update(){
	int flag=0;
	if(top == NULL){
		printf("\n stack is underflow");
	}
	else{
		p=top;
		printf("Enter the value which want to update ");
		scanf("%d",&upt);
		while(p!=NULL){
			if(p->data == upt){
				printf("\n Enter the value to change ");
				scanf("%d",&item);
				p->data=item;
				display();
				break;
			}
			else{
				flag++;
			}
			p=p->next;
		}
		if(flag!=0){
			printf("\n Invalid value");
		}
	}
}
void search(){
	int flag=0;
	if(top == NULL){
		printf("\n stack is underflow");
	}
	else{
		p=top;
		printf("\n Search by value");
		scanf("%d",&pos);
		while(p!=NULL){
			if(p->data == pos){
				flag++;
			}
			else{
				p=p->next;
			}
		}
		if(flag == 1){
			printf("\n Value is present %d",p->data);
		}
		else{
			printf("\n value is not present");
		}
	}	
}
