#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct tree{
	char data;
	struct tree *left,*right;
};
int top =-1;
struct tree *stack[20];
struct tree *node;
int check(char ch);
int main(){
	int i,p,k,ans;
	char s[20];
	printf("Enter the expression in postfix \n ");
	gets(s);
	k = strlen(s);
	for(i=0;s[i] != '\0';i++){
		p = check(s[i]);
		if(p==1){
			operand(s[i]);
		}
		else if(p==2){
			operators(s[i]);
		}
	}
	printf("\n Inorder Travesal ");
	inOrder(stack[top]);
	
	
}
int check(char ch){
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
		return 2;
	}
	else{
		return 1;
	}
}
void operand(char b){
	node = (struct tree*)malloc(sizeof(struct tree));
	node->data=b;
	node->left=NULL;
	node->right=NULL;
	push(node);
	
}
void operators(char a){
	node = (struct tree*)malloc(sizeof(struct tree));
	node->data=a;
	node->left=NULL;
	node->right=NULL;
	pop(node);
}

int cal(struct tree* node){
	int ch;
	ch = check(node->data);
	if(ch==1){
		return node->data - 48;
	}
	else if(ch==2){
		if(node->data == '+'){
			return cal(node->left)+cal(node->right);
		}
		else if(node->data == '-'){
			return cal(node->left)-cal(node->right);
		}
		else if(node->data == '*'){
			return cal(node->left)*cal(node->right);
		}
		else if(node->data == '/'){
			return cal(node->left)/cal(node->right);
		}
		s
	}
}

void push(struct tree *node){
	stack[top++]=node;
}
struct tree * pop(){
	return (stack[top--]);
}

void inOrder(struct tree *node){
	if(node!=NULL){
		inOrder(node->left);
		printf("%c",node->data);
		inOrder(node->right);
	}
}
