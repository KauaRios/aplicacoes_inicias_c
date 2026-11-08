#include <stdio.h>

int main()
{
    char livro[100], autor[100];
    int paginas;
    printf("Digite o nome do livro: ");
    scanf(" %99[^\n]", livro);
    // Modificação para ler uma string com espaços
    printf("Digite o nome do autor: ");
    scanf(" %99[^\n]", autor);
    // Modificação para ler uma string com espaços
    printf("Digite o numero de paginas: ");
    scanf("%d", &paginas);
    printf("\nVoce registrou o livro: '%s' de %s, com %d paginas.\n", livro, autor,
           paginas);
    return 0;
}