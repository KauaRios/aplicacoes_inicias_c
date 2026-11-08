#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int main(void) {
    pid_t pid = fork();

    if (pid == -1) {
        perror("fork");
        return 1;
    }

    if (pid == 0) {
        printf("Sou o filho! PID = %ld\n",
               (long)getpid());
    } else {
        printf("Sou o pai! PID = %ld\n",
               (long)getpid());

        printf("PID do meu filho = %ld\n",
               (long)pid);
    }

    return 0;
}

