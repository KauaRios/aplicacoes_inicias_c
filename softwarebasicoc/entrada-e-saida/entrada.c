#include "stdio.h"
int main(void)
{
    char string[80];
    printf("Digite uma string: ");
    scanf("%s", &string);
    printf("A string digitada eh:\n%s", string);
}