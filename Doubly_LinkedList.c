#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insertBeginning();
void insertMiddle();
void insertEnd();
void deleteBeg();
void deleteMiddle();
void deleteEnd();
void search();
void display();
struct node{
	int data;
	struct node *prev,*next;
};
struct node *head = NULL;
struct node *newnode,*p;
int choice,item,pos;
int main(){
	printf("\n Doubly Linked List \n");
	printf("\t Choose the operation \n");
	printf(" 1.InsertAtBeginning\t\n 2.InsertAtMiddle\t\n 3.InsertAtEnd\t\n 4.DeleteAtBeginnning\t\n 5.DeleteAtMiddle\t\n 6.DeleteAtEnd\t\n 7.Display\t\n 8.Search\n\t 9.Exitpoint\t\n");
	do{
		printf("\n Enter the choice ");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				insertBeginning();
				break;
			}
			case 2:{
				insertMiddle();
				break;
			}
			case 3:{
				insertEnd();
				break;
			}
			case 4:{
				deleteBeg();
				break;
			}
			case 5:{
				deleteMiddle();
				break;
			}
			case 6:{
				deleteEnd();
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
				printf("\n  Exit point ");
				break;
			}
		}
		
	}while(choice != 9);
	
}
void insertBeginning(){
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("\n Enter the data to insert at beginning ");
	scanf("%d",&item);
	newnode->data=item;
	newnode->next=NULL;
	newnode->prev=NULL;
	if(head == NULL){
		newnode->next=NULL;
		head = newnode;
	}
	else{
		p=head;
		newnode->next=p;
		p->prev = newnode;
		head = newnode;
	}
}
void display(){
	if(head == NULL){
		printf("\n List is empty ");
	}
	else{
		p=head;
		printf("\n The nodes in doubly linked list ");
		while(p!=NULL){
			printf("\t %d \t",p->data);
			p=p->next;
		}
	}
}
void insertMiddle(){
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("\n Enter the data to insert at middle ");
	scanf("%d",&item);
	printf("\n Enter the element insert after ");
	scanf("%d",&pos);
	newnode->data=item;
	p=head;
	while(p!=NULL){
		if(p->data == pos){
			newnode->next=p->next;
			newnode->prev=p;
			p->next->prev=newnode;
			p->next=newnode;
			break;
		}
		else{
			p=p->next;
		}
	}
	printf("\n The element is inserted %d ",newnode->data);
}
void insertEnd(){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter the data to insert at end ");
	scanf("%d",&item);
	newnode->data=item;
	newnode->next=NULL;
	if(head == NULL){
		head = newnode;
	}
	else{
		p=head;
		while(p->next!=NULL){
			p=p->next;
		}
		newnode->prev=p;
		p->next = newnode;
	}
	printf("\n The element is inserted %d ",newnode->data);
	
}
void deleteBeg(){
	if(head == NULL){
		printf("\n List is empty ");
	}
	else{
		p=head;
		if(p->prev == p->next){
			head = NULL;
			free(p);
		}
		else{
			head = p->next;
			p->prev=NULL;
			free(p);
		}
		printf("The element deleted %d ",p->data);
	}
}
void deleteMiddle(){
	int flag =0;
	if(head == NULL){
		printf("\n List is empty ");
	}
	else{
		printf("\n Enter the value to delete ");
		scanf("%d",&pos);
		p=head;
		while(p!=NULL){
			if(p->data == pos)
			{
				if(p->prev == NULL){
					head = p->next;
				}
				else{
					p->prev->next=p->next;
					p->next->prev=p->prev;
				}
				printf("The element is deleted %d ",p->data);
				free(p);
				break;	
			}
			p->prev=p;
			p=p->next;
			flag=1;	
		}
	}
		
}
void deleteEnd(){
	if(head == NULL){
		printf("\n List is empty ");
	}
	else{
		p=head;
		while(p->next!=NULL){
			p=p->next;
		}
		p->prev->next=NULL;
		printf("\n the element is deleted %d ",p->data);
		free(p);
	}
	
}
void search(){
	int flag = 0;
	if(head == NULL){
		printf("\n list is empty ");
	}
	else{
		printf("\n Search by value ");
		scanf("%d",&pos);
		p=head;
		while(p!=NULL){
			if(p->data == pos){
				flag++;
				break;
			}
			p=p->next;
		}
		if(flag == 1){
			printf("\n the value is present %d ",p->data);
		}
		else{
			printf("\n the value is not present ");
		}
	}
}





























