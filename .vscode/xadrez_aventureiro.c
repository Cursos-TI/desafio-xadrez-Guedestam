#include <stdio.h>

int main (){

    int i = 1;
    int i_ = 1;
    int movimentocavalo = 1;

    //Nivel Novato//

    printf("-------------Rainha---------\n");   // rainha 8 casas p/esquerda.
    while (i <= 8){
        printf("%d", i);
        printf("esquerda\n");

        i++;
    }
 
    printf("-----------Torre----------\n"); // Movimetação da Torre - 5 casas p/ frente.

    for ( int i = 0; i < 5; i++){
       printf("frente\n");  
    }
    printf("\n"); // espaço

    printf("----------------Bispo----------\n"); // bispo - 5 casas na diagonal direita ou esquerda.
    do
    {
         printf("cima esquerda\n");
        
        i_ ++;
    } while (i_ <= 5);
    
    // Nivel aventureiro 
    printf("\n");  //espaço

    printf("------------------Cavalo-----------------\n");  // cavalo - 2 casas p/cima e 1 casa a direita. 

    while (movimentocavalo --){

    }for (int i = 0; i < 2; i++)
    {   printf("cima \n");
        
    } printf("direita \n");
        
    

    return 0;
}