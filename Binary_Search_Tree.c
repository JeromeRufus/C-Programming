#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct tree{
	int data;
	struct tree *left;
	struct tree *right;
};
struct tree *root = NULL;
struct tree *cr,*p,*newnode,*min,*max,*tmp;
int choice,item,ma,mx;
void insert(){
	newnode=(struct tree*)malloc(sizeof(struct tree));
	printf("\n Enter the data to be insert ");
	scanf("%d",&item);
	newnode->data=item;
	newnode->left=NULL;
	newnode->right=NULL;
	p=root;
	if(root == NULL){
		root=newnode;
		return;
	}
	else{
		cr=root;
		while(cr!=NULL){
			p=cr;
			if(newnode->data < cr->data){
				cr=cr->left;
			}
			else{
				cr=cr->right;
			}
		}
		if(newnode->data < p->data){
			p->left = newnode;
		}
		else{
			p->right = newnode;
		}
	}
}
void inOrder(struct tree *temp){
	if(root == NULL){
		printf("\n Tree is empty ");
	}
	else{
		
		if(temp!=NULL){
			inOrder(temp->left);
			printf("\t %d \t",temp->data);
			inOrder(temp->right);
		}
	}
}
void postOrder(struct tree *temp){
	if(root == NULL){
		printf("\n Tree is empty ");
	}
	else{
		
		if(temp!=NULL){
			postOrder(temp->left);
			postOrder(temp->right);
			printf("\t %d \t",temp->data);
		}
	}
}
void preOrder(struct tree *temp){
	if(root == NULL){
		printf("\n Tree is empty ");
	}
	else{
		if(temp!=NULL){
			printf("\t %d \t",temp->data);
			preOrder(temp->left);
			preOrder(temp->right);
			
		}
	}
}
int minimum(struct tree *root){
	p=root;
	if(root == NULL){
		printf("\n Tree is empty ");
	}
	else{
		while(p!=NULL){
			min = p;
			p = p->left;
		}
	}
	return min->data;
}
int maximum(struct tree *root){
	p=root;
	if(root == NULL){
		printf("\n Tree is empty ");
	}
	else{
		while(p!=NULL){
			max=p;
			p=p->right;
		}
	}
	return max->data;
}
struct tree *deletion(struct tree *root,int val)
{
	if(root->data < val){
		root->right = deletion(root->right,val);
	}
	else if(root->data > val){
		root->left = deletion(root->left,val);
	}
	else{
		if(root->left == NULL && root->right == NULL){
			free(root);
			return NULL;
		}
		else if(root->left == NULL){
			tmp = root->right;
			free(root);
			return tmp;
		}
		else if(root->right == NULL){
			tmp = root->left;
			free(root);
			return tmp;
		}
		else{
			int rightMin = minimum(root->right);
			root->data = rightMin;
			root->right = deletion(root->right,rightMin);
		}
	}
	return root;
}
void main(){
	printf("\n Binary Search Tree ");
	printf("\n Choose the operation ");
	printf("1.Insert\t\n 2.InOrder\t\n 3.PreOrder\t\n 4.PostOrder\t\n 5.Find_Minimum\t\n 6.Find_Maximum\t\n ");
	do{
		printf("\n Enter the choice ");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				insert();
				break;
			}
			case 2:{
				printf("InOrder Travesal \n ");
				inOrder(root);
				break;
			}
			case 3:{
				printf("PreOrder Travesal \n ");
				preOrder(root);
				break;
			}
			case 4:{
				printf("PostOrder Travesal \n ");
				postOrder(root);
				break;
			}
			case 5:{
				ma = minimum(root);
				printf("The minimum value is %d ",ma);
				break;
			}
			case 6:{
				mx = maximum(root);
				printf("The maximum value is %d ",mx);
				break;
			}
			case 7:{
				if(root == NULL){
					printf("Tree is empty \n");
				}
				else{
					printf("\n Enter the value to be delete ");
					scanf("%d",&item);
					deletion(root,item);
					break;
				}
			}
		}
		
	}while(choice != 8);
}



