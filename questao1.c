#include <stdio.h>
#include <string.h>

typedef struct product{
    float preco;
    int codigo, baixa[2][3];
    char nome[15];
}product;

int main(void){

    product produtos[3];
    int i, j, k;
    float somaLinha = 0, somaColuna = 0;

    for ( i = 0; i < 3; i++)
    {
        printf("Informe o nome do produto: ");
        fgets(produtos[i].nome, 15, stdin);
        printf("Informe o codigo: ");
        scanf("%d", &produtos[i].codigo);
        printf("Informe o preco: ");
        scanf("%f", &produtos[i].preco);

        for(j=0; j<2; j++){

            for(k=0; k<3; k++){

                printf("Informe quantos produtos foram vendido no dia %d: ", k+1);
                scanf("%d", &produtos[i].baixa[j][k]);

            }

        }
        fflush(stdin);
    }
    
    system("cls");


    for(i=0; i<1; i++){

        for(j=0; j<2; j++){


            for(k=0; k<3; k++){
                somaColuna += produtos[i].baixa[j][k];    
            }
            somaLinha += somaColuna;
            
            printf("\n");
        }
    }
        
    printf("%d", somaLinha);


    return 0;
}