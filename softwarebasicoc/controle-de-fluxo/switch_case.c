#include <stdio.h>
int main()
{
    int escolha;

    printf("Escolha seu produto: 1 para Água, 2 para Refrigerante, 3 para Suco\n");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        printf("Você escolheu Água.\n");
    case 2:
        printf("Você escolheu Refrigerante.\n");
        break;
    case 3:
        printf("Você escolheu Suco.\n");
        break;
    default:
        printf("Opção inválida. Por favor, escolha um produto válido.\n");
    }
    return 0;
}
