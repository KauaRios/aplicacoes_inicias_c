#include <stdio.h>
#include <stdlib.h>



int main(){
FILE *arquivo;    
int codigo;
char produto[50];
float preco;
arquivo=fopen("/home/invasor/Documentos/c/prudotos.txt","r");
if (arquivo == NULL)
{
    printf("Problemas na CRIACAO do arquivo\n");
    return 1;
}

while(fscanf(arquivo, "%d;%49[^;];%f\n", &codigo, produto, &preco)!= EOF){
printf("Codigo: %d | Produto: %s | Preco: R$ %.2f\n", codigo, produto, preco);
}
fclose(arquivo);

return 0;
}