#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head = NULL;
struct node *prev,*p,*newnode;
int i,j,item,choice,key,x,pos,temp;
int array[100];
void insertAtBeginning(void);
void insertAtEnd(void);
void insertAtMiddle(void);
void display(void);
void delete_AtBeginning(void);
void delete_AtEnd(void);
void delete_AtSpecificLoc(void);
void search(void);
void insertPosition(void);
void sort(void);



int main(){
	
	printf("\n\t choose the operation");
	printf("\n\t 1.InsertAtBeginning\n\t 2.InsertAtEnd\n\t 3.InsertAtMiddle\n\t 4.Display\n\t 5.DeleteAtBeginnig\n\t 6.DeleteAtEnd\n\t 7.DeleteAtMiddle\n\t 8.Search\n\t 9.InsertPosition\n\t 10.Exitpoint\n\t");
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
				//sort();
				break;
			}
			case 9:{
				insertPosition();
				break;
			}
			case 10:{
				printf("\n Exit point");
				break;
			}
			
		}	
	}while(choice != 10);
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
void insertPosition(){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter the position to be inserted && Position should start with 1 ");
	scanf("%d",&pos);
	printf("\n Enter the data to be inserted ");
	scanf("%d",&item);
	p=head;
	newnode->data=item;
	for(i=2;i<=pos;i++){
		if(pos==1){
			if(head == NULL){
				newnode->next=NULL;
				head = newnode;
				break;
			}
			else{
				newnode->next=head;
				head=newnode;
				break;
			}
		}
			newnode->next=p->next;
			p->next=newnode;
			break;
		p=p->next;
	}	
}
void display(){
	if(head == NULL){
		printf("\n List empty");
	}
	else{
		p=head;
		printf("\n The nodes in singly linked list ");
		while(p!=NULL){
			printf("\t %d \t",p->data);
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
		printf("\n Enter the position to delete ");
		scanf("%d",&pos);
		p=head;
		prev = NULL;
		for(i=1;i<=pos;i++){
			if(pos == 1){
				if(p->next == NULL){
					head=NULL;
					printf("\n The element deleted %d ",p->data);
					free(p);
				}
				else{
					head = p->next;
					printf("\n The element deleted %d ",p->data);
					free(p);
				}
			}
			else{
				prev = p;
				p = p->next;
				break;
			}
		}
				prev->next = p->next;
				printf("\n The element deleted %d ",p->data);
				free(p);
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
//void sort(){
//	if(head == NULL){
//		printf("\n List is empty ");
//	}
//	else{
//		p=head;
//		while(p!=NULL){
//			index=p->next;
//			while(index!=NULL){
//				if(p->data > index->data){
//					temp = p->data;
//					p->data = index->data;
//					index->data = temp;
//				}
//				index=index->next;			
//			}
//			printf(" %d \n ",p->data);
//			p=p->next;
//		
//		}
//	}
//}

