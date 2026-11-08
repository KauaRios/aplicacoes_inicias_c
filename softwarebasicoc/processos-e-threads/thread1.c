#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(void){
    pid_t pid=fork();
    if(pid<0){
        perror("fork");
        return 1;
    }

    if(pid==0){
        printf("Filho:PID=%ld, pai=%ld\n", (long)getpid(), (long)getppid());

    }else{
        printf("Pai:PID=%ld, filho=%ld\n",(long)getpid(),(long)pid);
        waitpid(pid,NULL,0);
        printf("Pai:Filho terminou.\n");
    }
}