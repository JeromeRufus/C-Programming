#include<stdio.h>
#include<conio.h>
int queue[100],n,i,choice,front,rear,x,item;
void enQueue(void);
void deQueue(void);
void display(void);
void peek(void);
void delete(void);
int main(){
	front = -1;
	rear = -1;
	printf("\n\tEnter the Queue size ");
	scanf("%d",&n);
	printf("\n\t Choose the operation");
	printf("\n\t 1.enQueue\n 2.deQueue\n 3.display\n 4.peek\n 5.delete\n");
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
				delete();
				break;
			}
			case 6:{
				printf("\n\t Exit point");
				break;
			}
			default:{
				printf("\n\t Please choose option (1/2/3/4/5)");
				break;
			}
		}
		
	}
	while(choice!=6);
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
		printf("\n\t The elements in queue ");
		for(i=0;i<=rear;i++){
			printf("\n%d",queue[i]);
		}
	}
}
void peek(){
}
void delete(){
}
