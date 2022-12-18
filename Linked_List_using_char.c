#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insertBeg();
void insertMid();
void insertEnd();
void deleteBeg();
void deleteMid();
void deleteEnd();
void display();
void search();
struct node{
	char data;
	struct node *next;
};
struct node *head = NULL;
struct node *p,*prev,*newnode;
int choice;
char item,pos;
int main(){
		printf("\n Choose the operation ");
		printf("\n\t 1.InsertAtBeginning\n\t  2.InsertAtMiddle\n\t 3.InsertAtEnd\n\t 4.Display\n\t 5.DeleteAtBeginnig\n\t  6.DeleteAtMiddle\n\t 7.DeleteAtEnd\n\t 8.Search\n\t 9.Exitpoint\n\t");
		do{
			printf("\n Enter the choice ");
			scanf("%d",&choice);
			switch(choice){
				case 1:{
					insertBeg();
					break;
				}
				case 2:{
					insertMid();
					break;
				}
				case 3:{
					insertEnd();
					break;
				}
				case 4:{
					display();
					break;
				}
				case 5:{
					deleteBeg();
					break;
				}
				case 6:{
					deleteMid();
					break;
				}
				case 7:{
					deleteEnd();
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
			}	
		}while(choice != 9);
}


void insertBeg(){
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("\n Enter the data to insert at beginning ");
	scanf("%s",&item);
	newnode->data=item;
	if(head == NULL){
		head = newnode;
		newnode->next=NULL;
	}
	else{
		newnode->next=head;
		head = newnode;
	}
}
void insertMid(){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter the data to insert at middle ");
	scanf("%s",&item);
	newnode->data=item;
	printf("\n Enter the element insert after ");
	scanf("%s",&pos);
	p=head;
	while(p->next!=NULL){
		if(p->data == pos){
			newnode->next=p->next;
			p->next=newnode;
			break;
		}
		else{
			p=p->next;
		}
	}
}
void insertEnd(){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter the data to be inserted at end ");
	scanf("%s",&item);
	newnode->data=item;
	newnode->next=NULL;
	p=head;
	if(head == NULL){
		head = newnode;
	}
	else{
		while(p->next!=NULL){
			p=p->next;
		}
		p->next = newnode;	
	}	
}
void deleteBeg(){
	if(head == NULL){
		printf("\n List is empty ");
	}
	else{
		p=head;
		head = p->next;
		printf("\n The element is deleted %c ",p->data);
		free(p);
	}
	
}
void deleteMid(){
	if(head == NULL){
		printf("\n List is empty ");
	}
	else{
		p=head;
		prev = NULL;
		printf("Enter the data to element \n ");
		scanf("%s",&item);
		while(p!=NULL){
			if(p->data == item){
				if(prev == NULL){
					head = p->next;
				}
				else{
					prev->next = p->next;
				}
				printf("The element is deleted %c ",p->data);
				free(p);
				break;
			}
			prev=p;
			p=p->next;
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
			prev = p;
			p=p->next;
		}
		prev->next = NULL;
		printf("\n The element is deleted %c ",p->data);
		free(p);
	}
	
}
void display(){
	if(head == NULL){
		printf("\n List is empty ");
	}
	else{
		p=head;
		printf("The element in linked list \n");
		while(p!=NULL){
			printf("\t%c\t",p->data);
			p=p->next;
		}
	}
}
void search(){
	int flag=0;
	if(head == NULL){
		printf("\n List is empty ");
	}
	else{
		p=head;
		printf("\n Search by value ");
		scanf("%s",&item);
		while(p!=NULL){
			if(p->data == item){
				flag++;
				break;
			}
			else{
				p=p->next;
			}
		}
		if(flag == 1){
			printf("\n The value is present %c ",p->data);
		}
		else{
			printf("\n The value is not present ");
		}
	}
}
