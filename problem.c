#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void insertPosition(void);
void deleteSpecific(void);
void display(void);
void insertSorted(void);
struct node *head = NULL;
struct node *p,*newnode,*prev;
int item,choice,count=0,pos,i;
int main(){
	printf("\n 1.Insert by Giving Position \n 2.Delete by given Position \n 3.Insert in Sorted Order\n 4.Display\n 5.EXIT\n");
  do {
    printf("\n Enter the choice:");
    scanf("%d", & choice);
    switch (choice) {
    case 1:
      insertPosition();
      break;
    case 2:
      deleteSpecific();
      break;
    case 3:
      insertSorted();
      break;
    case 4:
      display();
      break;
    case 5:
      printf("EXIT POINT");
      break;
    default:
      printf("Enter a valid Choice");
      break;
    }
  } while (choice != 5);
}
void insertPosition(){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter the position to be inserted && Position should start with 0 ");
	scanf("%d",&pos);
	printf("\n Enter the data to be inserted ");
	scanf("%d",&item);
	p=head;
	newnode->data=item;
	if(pos==0){
			 if(head == NULL){
				newnode->next=NULL;
				head = newnode;
				count++;
				printf("\n Count value is %d ",count);	
				return;
			}
			else{
				newnode->next=head;
				head=newnode;
				count++;
				printf("\n Count value is %d ",count);	
				return;
			}
		}
		if(pos>=2){
			for(i=1;i<=pos;i++){
				if(pos>=count && p->next==NULL){
					newnode->next=NULL;
					p->next=newnode;
					count++;
					printf("\n Count value is %d ",count);	
					break;
				}
				else if(pos == i){
					newnode->next=p->next;
					p->next=newnode;
					count++;
					printf("\n Count value is %d ",count);
				}
				else{
					p=p->next;	
				}
			}
		}
		else{
			newnode->next=p->next;
			p->next=newnode;
			count++;
			printf("\n Count value is %d ",count);
		}
}
void deleteSpecific(){
		int flag=0;
	if(head == NULL){
		printf("\n list is empty");
	}
	else{
		printf("\n Enter the position to delete ");
		scanf("%d",&pos);
		p=head;
		prev = NULL;
		for(i=0;i<=pos;i++){
			if(pos == 0){
				if(p->next == NULL){
					head=NULL;
					count--;
					printf("\n The element deleted %d ",p->data);
					printf("\n Count value is %d ",count);
					free(p);
				}
				else{
					head = p->next;
					count--;
					printf("\n The element deleted %d ",p->data);
					printf("\n Count value is %d ",count);
					free(p);
				}
			}
			else if(pos == i){
				prev = p;
				p = p->next;
				prev->next = p->next;
				printf("\n The element deleted %d ",p->data);
				count--;
				printf("\n Count value is %d ",count);
				free(p);
				break;
			}
//			else{
//				prev = p;
//				p = p->next;
//				prev->next = p->next;
//				printf("\n The element deleted %d ",p->data);
//				count--;
//				printf("\n Count value is %d ",count);
//				free(p);
//				break;
//			}
		}
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
void insertSorted(){
}

