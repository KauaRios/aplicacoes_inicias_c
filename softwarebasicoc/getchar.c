#include <stdio.h>
#include <caca_conio.h>
#include <ctype.h>



int main(void){
    

    char caractere;
    printf("Entre com texto ou digite .");


    do{
        caractere=getch();

        if (islower(caractere)){
            caractere=toupper(caractere);
        }else{
            caractere=tolower(caractere);
        }


        putchar(caractere);





    }while(caractere != '.');




    return 0;
}


