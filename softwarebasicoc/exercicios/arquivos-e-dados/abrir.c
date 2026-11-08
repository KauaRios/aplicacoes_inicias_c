#include <stdio.h>
#include <stdlib.h>

int main() {
FILE *arquivo;    
char ch;
arquivo=fopen("aluno.txt","wt");
if (arquivo == NULL)
{
    printf("Problemas na CRIACAO do arquivo\n");
    return 1;
}
printf("Inserindo DADOS................");
fprintf(arquivo, "Nome: Joao Silva\nNota: 9.5\n");
fclose(arquivo);

arquivo=fopen("aluno.txt","rt");

while ((ch = getc(arquivo)) != EOF) {
        printf("%c", ch); 
    }

    fclose(arquivo); 
    return 0;
}
   
