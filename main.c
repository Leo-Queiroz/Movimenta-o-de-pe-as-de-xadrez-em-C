#include <stdio.h>
#include <stdlib.h>

int main(){
    int torre = 0;
    int bispo = 0;
    int rainha= 0;
    //movimentando a torre
    for(torre ; torre < 5 ; torre++){
        printf("torre\n");
        printf("direita\n");
    }
    printf("\n");
    //movimentando o bispo

    while(bispo < 5){
        bispo++;
        printf("bispo\n");
        printf("cima,direita\n");

    }
        printf("\n");
    //movimentando a Rainha
    do{
        rainha++;
        printf("rainha\n");
        printf("esquerda\n");
    }while(rainha < 8);
       return 0;
}

