#include <stdio.h>
#include <stdlib.h>


    void movimentoTorre(int movimento){
        if(movimento > 0){
            printf("torre\n");
            printf("direita\n");
            movimentoTorre(movimento - 1);
        }
    }
        void movimentoBispo(int movimento){
            if(movimento > 0){
                printf("Bispo\n");
                for (int i = 0 ; i < 1; i++){
                for(int j = 0 ; j < 1; j++ ){
                    printf("direita\n");
                    printf("cima\n");
                }
                movimentoBispo(movimento - 1);
            }
           }
        }

    void movimentoRainha(int movimento){
        if(movimento > 0){
            printf("Rainha\n");
            printf("Esquerda\n");
            movimentoRainha(movimento - 1);
        }
    }


int main(){
    //Váriaveis
    int torre = 5;
    int bispo = 5;
    int rainha= 8;
    //movimentando a torre
    movimentoTorre(torre);

    printf("\n");
    //movimentando o bispo
    movimentoBispo(bispo);
        printf("\n");
    //movimentando a Rainha
    movimentoRainha(rainha);
       //movimentando o cavalo
       printf("\n");//identando uma linha vazia
       int movimentacaoCavalo = 1;//valor inicial do cavalo

       while(movimentacaoCavalo--){
            for(int i = 0; i < 2;i++){
            printf("cima\n");//imprime "Cima 2 vezes"
            }
            printf("direita\n");
       }

    return 0;
}
