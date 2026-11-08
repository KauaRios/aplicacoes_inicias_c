// while (condição) {
//  Código a ser repetido
// }

// do {
//  Código a ser repetido
// } while (condição);

#include <stdio.h>
int main(){
char continuar;
do
{
    printf("Saque realizado com sucesso . Deseja fazer outro saque? (s/n):");
    scanf("%c", &continuar);
    //getchar para engolir o enter
    
    getchar();
} while (continuar=='s' || continuar=='S');
return 0;
}
