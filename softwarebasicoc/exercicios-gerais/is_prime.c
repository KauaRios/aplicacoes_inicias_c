#include <stdio.h>

int main(){
int count = 0, num = 2, i;
int N = 100; 
int isPrime;


while(count,N){
    isPrime=1; //assume q o numero é primo
    for(i=2;i*i<=num;i++){
        if(num % i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime){
        count++;
        if(count==N){
            printf("%d número primo é %d.\n",N,num);
        }
        
    }
    num++;
}




    return 0;
}

