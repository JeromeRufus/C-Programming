#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void enQueue(void);
void deQueue(void);
void display(void);
void peek(void);
void update(void);
void search(void);
void peep(void);
struct node{
	int data;
	struct node*next;
};
struct node *front=NULL;
struct node *p,*newnode,*pt;

int i,choice,item,upt,pos,x,count=0;
int main(){
	printf("/n Choose the operation ");
	printf("1.enQueue\n\t 2.deQueue\n\t 3.display\n\t 4.peek\n\t 5.update\n\t 6.search\n\t 7.peep\n\t 8.exitpoint\n\t");
	do{
		printf("\n\t Enter the choice");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				enQueue();
				break;
			}
			case 2:{
				deQueue();
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
				peep();
				break;
			}
			case 8:{
				printf("\n Exit point ");
				break;
			}
		}
	}while(choice!=8);
}
void enQueue(){
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("\n Enter the data to insert ");
	scanf("%d",&item);
	newnode->data = item;
	count++;
	printf("\n count is %d ",count);
	newnode->next = NULL;
	if(front == NULL){
		front = newnode;
	}
	else{
		p=front;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=newnode;
	}
}
void deQueue(){
	if(front == NULL){
		printf("\n Queue is underflow");
	}
	else{
		p=front;
		front=p->next;
		printf("The element deleted in queue %d",p->data);
		free(p);
		count--;
		printf("\n count is %d ",count);
		
	}
}
void display(){
	if(front == NULL){
		printf("\n Queue is underflow");
	}
	else{
		p=front;
		while(p!=NULL){
			if(p == front){
				printf("front -> %d ",p->data);
				if(count == 1){
					printf(" <- rear ");
				}
			}
			else if(p!=front && p->next != NULL){
				printf("\t %d \t",p->data);
			}
			else if(p->next == NULL){
				printf("%d <-rear",p->data);
			}
			p=p->next;
		}
	}
//	else{
//		p=front;
//		front=p;
//		printf("front-> %d ",p->data);
//		while(p->next != NULL){
//			printf("\t %d \t ",p->data);
//			p=p->next;
//		}
//		printf(" %d <-rear",p->data);	
//		
//	}
	
}
void peek(){
	if(front == NULL){
		printf("\n queue is underflow");
	}
	else{
		p=front;
		printf("Peek value in queue is %d",p->data);
	}
}
void update(){
	int flag=0;
	if(front == NULL){
		printf("\n queue is underflow");
	}
	else{
		p=front;
		printf("\nEnter the value want to update ");
		scanf("%d",&upt);
		while(p!=NULL){
			if(p->data == upt){
				printf("\n Enter the update value ");
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
			printf("\n Invalid position ");
		}
	}
}
void search(){
	int flag =0;
	if(front == NULL){
		printf("\n queue is underflow");
	}
	else{
		p=front;
		printf("\n Search by value ");
		scanf("%d",&pos);
		while(p!=NULL){
			if(p->data == pos){
				flag=1;
				x=p->data;
			}
			p=p->next;
		}
		if(flag==1){
			printf("Value is present %d",x);
		}
		else{
			printf("Value is not present");
		}
	}
}
void peep(){
	if(front == NULL){
		printf("\n Queue is underflow");
	}
	else{
		printf("\n Enter the position to find ");
		scanf("%d",&pos);
		p=front;
		if(pos<count && pos>=0){
			for(i=1;i<=pos;i++){
				if(i==pos){
					printf("Elements is %d ",p->data);
				}
				else{
					p=p->next;	
				}
			}
		}
		else{
			printf("\n Invalid position ");
		}
		
	}
}
