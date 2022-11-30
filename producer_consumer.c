#include<stdio.h>
#include<conio.h>
#include<semaphore.h>
#include<pthread.h>
sem_t empty;
sem_t full;
int i,in =0;
int out =0;
int buffer[5];
pthread_mutex_t mutex;
void *producer(void *pno){
	int item;
	for(i=0;i<5;i++){
		item = rand();
		sem_wait(&empty);
		pthread_mutex_lock(&mutex);
		buffer[in]=item;
		in = (in+1)%5;
		printf(" The producer is %d insert item %d in %d \n",*((int *)pno),buffer[in],in);
		pthread_mutex_unlock(&mutex);
		sem_post(&full);
	}
}
void *consumer(void *cno){
	int item;
	for(i=0;i<5;i++){
		sem_wait(&full);
		pthread_mutex_lock(&mutex);
		out = item;
		out = (out+1)%5;
		printf(" The consumer is %d Remove item  %d from %d \n",*((int *)cno),buffer[out],out);
		pthread_mutex_unlock(&mutex);
		sem_post(&empty);
	}
	
}
int main(){
	pthread_t pro[5],con[5];
	pthread_mutex_init(&mutex,NULL);
	sem_init(&empty,0,5);
	sem_init(&full,0,0);
	
	int a[5]={1,2,3,4,5};
	for(i=0;i<5;i++){
		pthread_create(&pro[i],NULL,(void *)producer,(void *)&a[i]);
	}
	for(i=0;i<5;i++){
		pthread_create(&con[i],NULL,(void *)consumer,(void *)&a[i]);
	}
	for(i=0;i<5;i++){
		pthread_join(pro[i],NULL);
	}
	for(i=0;i<5;i++){
		pthread_join(con[i],NULL);
	}
	pthread_mutex_destroy(&mutex);
	sem_destroy(&empty);
	sem_destroy(&full);
}
