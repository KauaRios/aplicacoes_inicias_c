#include <stdio.h>

typedef struct{
    int matricula;
    char nome[50];
    float nota;
}Aluno;



int main(){
    Aluno aluno;
    printf("Digite sua matricula :");
    scanf("%d",&aluno.matricula);
    printf("Digite seu nome:");
    scanf("%s",aluno.nome);

    printf("Digite sua nota:");
    scanf("%d",&aluno.nota);

    printf("\n===DADOS DO ALUNO===\n");

    printf("Matricula:%d\n",aluno.matricula);
    printf("Nome:%d\n",aluno.nome);
    printf("Nota:%d\n",aluno.nota);


    return 0;
}