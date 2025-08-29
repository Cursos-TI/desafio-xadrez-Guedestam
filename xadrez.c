#include <stdio.h>

int main() {
    printf("Desafio Xadrez\n");
    printf("Novo comit\n");

    int i = 1;
    int i_ = 1;
    
    //Nivel Novato//
    
    // Movimentação da rainha 8 casas p/esquerda.
    while (i <= 8){
        printf("%d", i);
        printf("esquerda\n");

        i++;
    }
    
    // Movimetação da Torre - 5 casas p/ esquerda.
    for ( int i = 0; i < 5; i++){
       printf("frente\n");  // Mover torre 5 casas para frente. 
    }
    
    // movimentação do bispo - 5 casas na diagonal direita ou esquerda. 

    do
    {
         printf("cima esquerda\n");
        
        i_ ++;
    } while (i_ <= 5);
    
    return 0;
}
