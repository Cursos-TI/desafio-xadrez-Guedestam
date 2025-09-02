#include <stdio.h> 


    // Rainha - 8 casas para esquerda.// 
void movimentorainha(int rainha) {
    if (rainha > 0) {
        movimentorainha(rainha - 1); 
        printf("esquerda: %d\n", rainha);
    }
}


void movimentobispo(int bispo){
    if (bispo > 0){
         movimentobispo(bispo -1);
         
    }
    switch (bispo)
    {
    case 1:
        printf("bispo movido para casa C %d\n", bispo);
        break;
    case 2:
        printf("bispo movido para casa D %d\n", bispo);
        break;
    case 3:
        printf("bispo movido para casa E %d\n", bispo);
        break;
    case 4:
        printf("bispo movido para casa F %d\n", bispo);
        break;
     case 5:
        printf("bispo movido para casa G %d\n", bispo);
        break;
    default: 
        break;
    }

}

void movimentocavalo(int cavalo) {
    if (cavalo > 0) {
        printf("Cavalo movido para B2\n", cavalo);
        printf("Cavalo movido para B3\n", cavalo);
        printf("Cavalo movido para direita C3\n", cavalo);
     }
    
    }

void movimentotorre(int torre){
    if (torre > 0){
         movimentotorre(torre - 1);
         printf("direita: %d\n", torre);
    }
    

}


int main() {
   printf("novo commit\n");
    printf("--------Rainha-------\n"); 
    int rainha = 8; // numeros de movimentos: 8 casas para a esquerda.//
    movimentorainha(rainha);
    
    printf("-------Bispo--------\n");
    int bispo = 5; // numeros de movimentos: 5 casas na diagonal direita para cima.// 
    movimentobispo(bispo);
    
    printf("-------torre--------\n");
    int torre = 5; // numeros de movimento: 5 casas para a direita.//
    movimentotorre(torre);
    
    printf("---------Cavalo-------\n");
    int cavalo = 3;
    movimentocavalo(cavalo);
    
    return 0;
}
