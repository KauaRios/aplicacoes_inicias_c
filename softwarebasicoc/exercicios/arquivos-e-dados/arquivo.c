#include <stdio.h>


struct Aluno
{
    int matricula;
    char nome[50];
    float nota;
};




int main() {
    struct Aluno a = {12345, "Maria", 8.5};
    printf("Matricula: %d\n", a.matricula);
    printf("Nome: %s\n", a.nome);
    printf("Nota: %.2f\n", a.nota);
}
