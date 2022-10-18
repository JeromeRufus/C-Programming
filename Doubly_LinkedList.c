#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insertBeginning(void);
void insertAtMiddle(void);
void insertAtEnd(void);
void deleteAtBeginning(void);
void deleteAtMiddle(void);
void deleteAtEnd(void);
void display(void);
void search(void);
struct node{
	int data;
	struct node *prev,*next;
};
struct node *head,*newnode,*p;
int choice,item,pos;
int main(){
	printf("\n Choose the operation ");
	printf("\n\t 1.InsertAtBeginning\n\t 2.InsertAtMiddle\n\t 3.InsertAtEnd\n\t  4.DeleteAtBeginning\n\t 5.DeleteAtMiddle\n\t 6.DeleteAtEnd\n\t 7.Display\n\t 8.Search\n\t 9.Exitpoint\n\t ");
	do{
		printf("\n Enter the choice ");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				insertBeginning();
				break;
			}
			case 2:{
				insertAtMiddle();
				break;
			}
			case 3:{
				insertAtEnd();
				break;
			}
			case 4:{
				deleteAtBeginning();
				break;
			}
			case 5:{
				deleteAtMiddle();
				break;
			}
			case 6:{
				deleteAtEnd();
				break;
			}
			case 7:{
				display();
				break;
			}
			case 8:{
				search();
				break;
			}
			case 9:{
				printf("\n Exit point ");
				break;
			}
			default:{
				printf("\n Invalid position ");
				break;
			}
		}
		
	}while(choice != 9);
	
}
void insertBeginning(){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter the data to insert at beginning ");
	scanf("%d",&item);
	p=head;
	newnode->data=item;
	newnode->prev=NULL;
	newnode->next=NULL;
	if(head == NULL){
		newnode->next=NULL;
		head = newnode;
	}
	else{
		newnode->next = p ;
		p->prev=newnode->next;
		head = newnode;
	}
}
void insertAtEnd(){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter the data to insert at end ");
	scanf("%d",&item);
	newnode->data=item;
	p=head;
	newnode->next=NULL;
	if(head == NULL){
		head = newnode;
	}
	else{
		while(p->next!=NULL){
			p=p->next;
		}
		newnode->prev=p;
		p->next=newnode;
	}
}
void insertAtMiddle(){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter the data to insert at middle ");
	scanf("%d",&item);
	printf("\n Enter the value to insert after ");
	scanf("%d",&pos);
	newnode->data=item;
	p=head;
	if(head == NULL){
		printf("\n List is empty ");
	}
	else{
		while(p!=NULL){
			if(p->data==pos){
				newnode->next=p->next;
				newnode->prev=p;
				p->next=newnode;
				break;	
			}
			else{
				p=p->next;
			}
		}
		printf("\n Data inserted at the middle %d ",newnode->data);
	}
	
}
void display(){
	if(head==NULL){
		printf("\n List is empty ");
	}
	else{
		p=head;
		printf(" The Nodes in Doubly Linked list \n");
		while(p!=NULL){
			printf("\t %d \t ",p->data);
			p=p->next;
		}
	}
}
void deleteAtBeginning(){
	
}
void deleteAtMiddle(){
	
}
void deleteAtEnd(){
	
}
void search(){
}
