#include <stdio.h>
#include <stdlib.h>



int main(){
    char nome[50];
    int nota;
    char ch;
   


    printf("Digite seu nome:");
    scanf("%s",nome);

    printf("Digite sua nota: ");
    scanf("%d",&nota);


     FILE *arquivo=fopen("nota.txt","wt");

    if(arquivo==NULL){
        printf("Problemas na criacao do arquivo");
        return 1;
    }

    


    printf("Inserindo dados no arquivo....\n");
    fprintf(arquivo, "Nome: %s\nNota: %d\n", nome, nota);
    fclose(arquivo);

    arquivo = fopen("nota.txt", "rt");
    while((ch = getc(arquivo)) != EOF){
        printf("%c",ch);
    }
    fclose(arquivo);

    return 0;
}