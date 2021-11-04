#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
    int reservas,l, c, linha, coluna, assentos[28][4]={};

    for(l=0;l<28;l++){
        for(c=0;c<4;c++){
            assentos[l][c]=0;
        }
    }

    do{
        printf("colunas: 0 = janela esquerda \n         1 = janela direita \n         2 = corredor esquerdo \n         3 = corredor direito\n\n");
        printf(" 0    1    2   3:  linha\n");
        for(l=0;l<28;l++){
            for(c=0;c<4;c++){

            printf("  %d ", assentos[l][c]);
            }
            printf("    %d  \n", l);
        }

        printf("Selecione assento informando numero de linha e coluna:");
        scanf("%d %d",&linha, &coluna);

        if (linha<0 || linha >27){
                printf("\nlinha invalida. Digite uma linha valida!\n");

        }
        if (coluna<0 || coluna>4){
                printf("\ncoluna invalida. Digite uma coluna valida!\n");
        }
        if(assentos[linha][coluna]==1){
            printf("\nPoltrona reservada. Escolha outra poltrona.\n");
        }
        else{
            assentos[linha][coluna]=1;
            printf("\nReserva feita com sucesso.\n");
        }
        reservas++;
    }while (reservas<112);


    /*printf("Selecione assento informando numero de coluna");
    scanf("%d",&coluna);
*/

    return 0;
}
