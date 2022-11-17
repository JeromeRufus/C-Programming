#include<stdio.h>
#include<conio.h>
void consumer();
int mutex=1,full=0,empty=3,x=0,i=1;
int wait(int s){
	return (--s);
}
int signal(int s){
	return (++s);
}
void producer(){
	mutex = wait(mutex);
	full=signal(full);
	empty=wait(empty);
	x++;
	printf("\n Producer item %d ",x);
	mutex = signal(mutex);
	consumer();
}
void consumer(){
	mutex=wait(mutex);
	full=wait(full);
	empty=signal(empty);
	printf("\n Consumer item %d ",x);
//	while(i<=x){
//		printf("\n Consumer item %d ",x);
//		i++;
//		full=wait(full);
//		empty=signal(empty);
//	}
	mutex=signal(mutex);
}
void main(){
	int n;
	printf("\n 1.Producer\n 2.Consumer\n 3.Exit ");
	do{
		printf("\n Enter the choice ");
		scanf("%d",&n);
		switch(n){
			case 1:{
				if((mutex == 1)&&(empty != 0)){
					producer();
				}
				else{
					printf("Buffer is full \n ");
				}
				break;
			}
			case 2:{
				if((mutex == 1)&&(full!=0)){
					consumer();
				}
				else{
					printf("Buffer is empty ");
				}
				break;
			}
			case 3:{
				printf("\n Exit point ");
				break;
			}
		}
	}while(n!=3);
}

