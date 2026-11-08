#include <stdio.h>
#include <pthread.h>


int contador=0;
pthread_mutex_t mutex=PTHREAD_MUTEX_INITIALIZER;
void *incrementar(void *arg){
    for (int i=0; i<100000;i++){
        pthread_mutex_lock(&mutex);
        contador++;
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}
int main(void){
    pthread_t t1,t2;
    if(pthread_create(&t1,NULL,incrementar,NULL)!=0)return 1;
    if(pthread_create(&t2,NULL,incrementar,NULL)!=0){
        pthread_join(t1,NULL);
        return 1;
    }
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    printf("Contador final: %d\n",contador);
    pthread_mutex_destroy(&mutex);
    return 0;
}

