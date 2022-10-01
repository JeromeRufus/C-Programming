#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head = NULL;
struct node *prev,*p,*newnode;
int item,choice,key,x;

void insertAtBeginning(void);
void insertAtEnd(void);
void insertAtMiddle(void);
void display(void);
void delete_AtBeginning(void);
void delete_AtEnd(void);
void delete_AtSpecificLoc(void);
void search(void);


int main(){
	
	printf("\n\t choose the operation");
	printf("\n\t 1.InsertAtBeginning\n\t 2.InsertAtEnd\n\t 3.InsertAtMiddle\n\t 4.Display\n\t 5.DeleteAtBeginnig\n\t 6.DeleteAtEnd\n\t 7.DeleteAtMiddle 8.Search\n\t 9.Exitpoint\n\t");
	do{
		printf("\n Enter the choice");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				insertAtBeginning();
				break;
			}
			case 2:{
				insertAtEnd();
				break;
			}
			case 3:{
				insertAtMiddle();
				break;
			}
			case 4:{
				display();
				break;
			}
			case 5:{
				delete_AtBeginning();
				break;
			}
			case 6:{
				delete_AtEnd();
				break;
			}
			case 7:{
				delete_AtSpecificLoc();
				break;
			}
			case 8:{
				search();
				break;
			}
			case 9:{
				printf("\n Exit point");
				break;
			}
			
		}	
	}while(choice != 9);
}
void insertAtBeginning(){
	newnode = (struct node*)malloc (sizeof(struct node));
	printf("\n Enter the data at beginning");
	scanf("%d",&item);
	newnode->data=item;
	if(head == NULL){
		newnode->next = NULL;
		head = newnode;
	}
	else{
		newnode -> next = head;
		head = newnode;
	}
}
void insertAtEnd(){
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("\n Enter the data at end");
	scanf("%d",&item);
	newnode->data = item;
	newnode->next = NULL;
	if(head == NULL){
		head = newnode;
	}
	else{
		p=head;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=newnode;
	}
}
void insertAtMiddle(){
	newnode = (struct node*)malloc(sizeof(struct node));
	if(head == NULL){
		printf("\n List is empty");
	}
	else{
		printf("\n Enter the data to insert at middle");
		scanf("%d",&item);
		printf("\n Enter the position to insert middle");
		scanf("%d",&key);
		p=head;
		newnode->data = item;
		while(p->next!=NULL){
			if(p->data == key){
				newnode->next = p->next;
				p->next = newnode;
				break;
			}
			else{
				p=p->next;
			}
		}
	}
}
void display(){
	if(head == NULL){
		printf("\n List empty");
	}
	else{
		p=head;
		while(p!=NULL){
			printf("\n The element %d",p->data);
			p=p->next;
		}
	}
}
void delete_AtBeginning(){
	if(head == NULL){
		printf("\n List is empty");
	}
	else{
		p=head;
		head = p->next;
		printf("Delete At Beginning is %d",p->data);
		free(p);
	}
}
void delete_AtEnd(){
	if(head == NULL){
		printf("\n List is empty");
	}
	else{
		p=head;
		while(p->next!=NULL){
			prev = p;
			p = p->next;
		}
		prev->next = p->next;
		printf("The element deleted %d ",p->data);
		free(p);
	}
}
void delete_AtSpecificLoc(){
	int flag=0;
	if(head == NULL){
		printf("\n list is empty");
	}
	else{
		printf("\n Enter the position ");
		scanf("%d",&key);
		p=head;
		prev = NULL;
		while(p!=NULL){
			if(p->data == key)
			{
					if(p->data == NULL)
					{
						head = prev->data;
						break;
					}
					else{
						prev->next = p->next;
					}
				printf("The Element Deleted is %d",p->data);
				free(p);
				break;
			}
			prev = p;
			p=p->next;
			flag=1;
		}
		if(flag == 0){
			printf("\n The value is not present");
		}
	}
}
void search(){
	int flag=0;
	if(head == NULL){
		printf("\n List is empty");
	}
	else{
		printf("\n Enter the value to search");
		scanf("%d",&key);
		p=head;
		while(p!=NULL){
			if(p->data == key){
				flag=1;
				x=p->data;	
			}
			p=p->next;
		}
		if(flag==1){
			printf("\n Value is present %d",x);
		}
		else{
			printf("\n Value is not present");
		}
	}
}
