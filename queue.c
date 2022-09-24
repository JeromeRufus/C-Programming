#include<stdio.h>
#include<conio.h>
int queue[100],n,i,choice,front,rear,x,item,pos,upt;
void enQueue(void);
void deQueue(void);
void display(void);
void peek(void);
void peep(void);
void update(void);
int main(){
	front = -1;
	rear = -1;
	printf("\n\tEnter the Queue size ");
	scanf("%d",&n);
	printf("\n\t Choose the operation");
	printf("\n\t 1.enQueue\n 2.deQueue\n 3.display\n 4.peek\n 5.peep\n 6.update\n 7.Exit\n");
	do{
		printf("\n\t Enter the Choice");
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
				peep();
				break;
			}
			case 6:{
				update();
				break;
			}
			case 7:{
				printf("\n\t Exit point");
				break;
			}
			default:{
				printf("\n\t Please choose option (1/2/3/4/5/6)");
				break;
			}
		}
		
	}
	while(choice!=7);
}
void enQueue(){
	if(rear>=n-1){
		printf("\n\t Queue is overflow");
	}
	else{
		if(front ==-1 && rear ==-1){
			printf("\n\t Enter the value to insert");
			scanf("%d",&x);
			front++;
			rear++;
			queue[rear]=x;
		}
		else{
			printf("\n\t Enter the value to insert");
			scanf("%d",&x);
			rear++;
			queue[rear]=x;
		}
		
	}
}
void deQueue(){
	if(front<=-1){
		printf("\n\t Queue is underflow");
		
		
	}
	else{
		item = queue[front];
		if(front == rear){
			front=rear=-1;
			printf("\n\t The dequeue value is %d",item);
		}
		else{
			front++;
			printf("\n\t The dequeue value is %d",item);
		}
	}
	
}
void display(){
	if(front<=-1){
		printf("\n\tQueue is underflow");
	}
	else{
		printf("\n\t The elements in queue \n");
		for(i=front;i<=rear;i++){
			printf("%d\t",queue[i]);
		}
	}
}
void peek(){
	if(front<=-1){
		printf("\n\t Queue is underflow");
	}
	else{
		printf("Queue's peek value is %d",queue[front]);
	}
}
void peep(){
	if(front<=-1){
		printf("\n\t queue is underflow");
	}
	else{
		printf("Enter the position to search");
		scanf("%d",&pos);
		if(pos<=rear && pos>=0){
			printf("\n\t Position of %d value is %d",pos,queue[pos]);
		}
		else{
			printf("\n\t Position is invalid");
		}
	}
}
void update(){
	if(front<=-1){
		printf("\n\t queue is underflow");
	}
	else{
		printf("Enter the position to update");
		scanf("%d",&pos);
		if(pos<=rear && pos>=0){
			printf("\n\t Enter the value to update");
			scanf("%d",&upt);
			queue[pos]=upt;
			display();
		}
		else{
			printf("\n\t position is invalid");
		}
	}
}



