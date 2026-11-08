#include<stdio.h>
#include <pthread.h>

void *tarefa1(void *args){
    for (int i =1; i<=5;i++) printf("Thread 1: %d\n",i);
    return NULL;
}

void *tarefa2(void *args){
    for (int i =1; i<=5;i++) printf("Thread 2: %d\n",i);
    return NULL;
}

int main(void){
    pthread_t t1,t2;
    if(pthread_create(&t1,NULL,tarefa1,NULL)!=0)return 1;
    if(pthread_create(&t2,NULL,tarefa2,NULL)!=0){
        pthread_join(t1,NULL);
        return 1;
    }
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    puts("Todas as threads terminaram.");
    return 0;
}

