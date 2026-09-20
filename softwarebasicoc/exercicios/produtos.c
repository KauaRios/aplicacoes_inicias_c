#include <stdio.h>

int main() {
    FILE *arq;
    int codigo;
    char nome[50];
    float preco;

    arq = fopen("produtos.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    while (fscanf(arq, "%d;%49[^;];%f\n", &codigo, nome, &preco) == 3) {
        printf("Codigo: %d | Produto: %s | Preco: %.2f\n", codigo, nome, preco);
    }

    fclose(arq);
    return 0;
}