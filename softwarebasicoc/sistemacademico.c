#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

#define MAX 100

int main() {

    char nomes[MAX][50];
    float notas[MAX];
    int idades[MAX];

    int quantidade = 0;
    int opcao;
    int i;

    do {

        printf("\n==============================\n");
        printf("      SISTEMA ACADEMICO EM C\n");
        printf("==============================\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Listar alunos\n");
        printf("3 - Calcular media da turma\n");
        printf("4 - Buscar aluno\n");
        printf("5 - Mostrar estatisticas\n");
        printf("6 - Mostrar data e hora\n");
        printf("0 - Sair\n");
        printf("==============================\n");
        printf("Escolha uma opcao: ");

        scanf("%d", &opcao);
        getchar();

        switch (opcao) {

            // ==============================
            // CADASTRAR ALUNO
            // ==============================
            case 1:

                if (quantidade >= MAX) {
                    printf("\nLimite de alunos atingido!\n");
                    break;
                }

                printf("\nNome: ");
                fgets(nomes[quantidade], 50, stdin);

                // Remove o ENTER do nome
                nomes[quantidade][strcspn(nomes[quantidade], "\n")] = '\0';

                printf("Idade: ");
                scanf("%d", &idades[quantidade]);

                if (idades[quantidade] <= 0) {
                    printf("\nIdade invalida!\n");
                    break;
                }

                printf("Nota: ");
                scanf("%f", &notas[quantidade]);

                if (notas[quantidade] < 0 || notas[quantidade] > 10) {
                    printf("\nNota invalida! Digite uma nota entre 0 e 10.\n");
                    break;
                }

                quantidade++;

                printf("\nAluno cadastrado com sucesso!\n");

                break;


            // ==============================
            // LISTAR ALUNOS
            // ==============================
            case 2:

                printf("\n================= ALUNOS =================\n");

                if (quantidade == 0) {

                    printf("Nenhum aluno cadastrado.\n");

                } else {

                    for (i = 0; i < quantidade; i++) {

                        printf("\nAluno %d\n", i + 1);
                        printf("Nome: %s\n", nomes[i]);
                        printf("Idade: %d\n", idades[i]);
                        printf("Nota: %.2f\n", notas[i]);

                        if (notas[i] >= 7) {
                            printf("Situacao: APROVADO\n");
                        } else {
                            printf("Situacao: REPROVADO\n");
                        }
                    }
                }

                break;


            // ==============================
            // MEDIA DA TURMA
            // ==============================
            case 3: {

                float soma = 0;
                float media;

                if (quantidade == 0) {

                    printf("\nNenhum aluno cadastrado.\n");

                } else {

                    for (i = 0; i < quantidade; i++) {
                        soma += notas[i];
                    }

                    media = soma / quantidade;

                    printf("\nMedia da turma: %.2f\n", media);

                    printf("Media arredondada: %.0f\n", round(media));
                }

                break;
            }


            // ==============================
            // BUSCAR ALUNO
            // ==============================
            case 4: {

                char busca[50];
                int encontrado = 0;

                if (quantidade == 0) {

                    printf("\nNenhum aluno cadastrado.\n");
                    break;
                }

                printf("\nDigite o nome do aluno: ");

                fgets(busca, 50, stdin);

                busca[strcspn(busca, "\n")] = '\0';

                for (i = 0; i < quantidade; i++) {

                    if (strcmp(busca, nomes[i]) == 0) {

                        printf("\nAluno encontrado!\n");
                        printf("Nome: %s\n", nomes[i]);
                        printf("Idade: %d\n", idades[i]);
                        printf("Nota: %.2f\n", notas[i]);

                        if (notas[i] >= 7) {
                            printf("Situacao: APROVADO\n");
                        } else {
                            printf("Situacao: REPROVADO\n");
                        }

                        encontrado = 1;
                        break;
                    }
                }

                if (encontrado == 0) {
                    printf("\nAluno nao encontrado!\n");
                }

                break;
            }


            // ==============================
            // ESTATISTICAS
            // ==============================
            case 5: {

                float maiorNota = 0;
                float menorNota = 10;

                int aprovados = 0;

                if (quantidade == 0) {

                    printf("\nNenhum aluno cadastrado.\n");

                } else {

                    for (i = 0; i < quantidade; i++) {

                        if (notas[i] > maiorNota) {
                            maiorNota = notas[i];
                        }

                        if (notas[i] < menorNota) {
                            menorNota = notas[i];
                        }

                        if (notas[i] >= 7) {
                            aprovados++;
                        }
                    }

                    printf("\n================ ESTATISTICAS ================\n");

                    printf("Maior nota: %.2f\n", maiorNota);

                    printf("Menor nota: %.2f\n", menorNota);

                    printf("Quantidade de aprovados: %d\n", aprovados);

                    printf("Quantidade de reprovados: %d\n",
                           quantidade - aprovados);

                    printf("Percentual de aprovados: %.2f%%\n",
                           (float)aprovados / quantidade * 100);
                }

                break;
            }


            // ==============================
            // DATA E HORA
            // ==============================
            case 6: {

                time_t agora;

                time(&agora);
                printf("\nData e hora do sistema:\n");
                printf("%s", ctime(&agora));

                break;
            }


            // ==============================
            // SAIR
            // ==============================
            case 0:

                printf("\nSaindo do sistema...\n");
                printf("Ate logo!\n");

                break;


            // ==============================
            // OPCAO INVALIDA
            // ==============================
            default:

                printf("\nOpcao invalida!\n");

                break;
        }

    } while (opcao != 0);

    return 0;
}
