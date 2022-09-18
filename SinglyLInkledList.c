#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;

};
struct node * createLinkledList(int n);
void displayList(struct node * head);
void Delete(int n,struct node **head);
struct node *head = NULL;

int main(){
    int n,d;
    struct node*head;

    printf("Number of elements");
    scanf("%d",&n);

    head = createLinkledList(n);
    displayList(head);

     printf("Enter the position to delete node");
     scanf("%d",&d);
     Delete(d,&head);
     displayList(head);
     return 0;
}

struct node * createLinkledList(int n){
    int i;
    struct node *temp = NULL;
    struct node *p = NULL;

    for(i=0;i<n;i++){
            //creating a node
             temp = (struct node *)malloc(sizeof(struct node));
            //Assigning data to node
             printf("Enter the data %d:",i+1);
                scanf("%d",&(temp ->data));
                temp->link=NULL;
            //If list is empty assign the address of newly created node to head
                if(head == NULL){
                    head=temp;
                }
                else{

                    p = head;
                    while(p->link!=NULL){
                        p = p->link;
                    }
                    p->link = temp;
                }
    }
    return head;
}
void displayList(struct node *head){
    struct node *temp = head;
    if(head == NULL){
        printf("Linked List is empty" );
    }
    else{
   /*struct node * p = NULL;
   p = head;*/
    temp = head;
    while(temp!= NULL){
        printf("%d and their address is %u\n",temp->data,temp);
        temp = temp->link;
    }
    }

}
void Delete(int n,struct node ** head){
    struct node *current = *head;
    struct node *previous = *head;
    if(*head == NULL){
        printf("List is already empty!");
    }
    else if(n==1){
            *head = current->link;
            free(current);
            current = NULL;
    }
    else{
        while(n != 1){
            previous = current;
            current = current->link;
            n--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
    }
}




