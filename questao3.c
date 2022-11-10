#include <stdio.h>
#include <string.h>

struct restaurante
{
    char nome[30], endereco[40], tipoComida[30];
    float preco;

};

struct restaurante restaurante[2][2];

void mostraRestaurante(int lin, int col){

    printf("NOME: %s", restaurante[lin][col].nome);
    printf("ENDERECO: %s", restaurante[lin][col].endereco);
    printf("TIPO DE COMIDA: %s", restaurante[lin][col].tipoComida);
    printf("PRECO MEDIO: R$ %.2f\n", restaurante[lin][col].preco);
}

void mostraTodos(){
    for(int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            
            printf("NOME: %s", restaurante[i][j].nome);
            printf("ENDERECO: %s", restaurante[i][j].endereco);
            printf("TIPO DE COMIDA: %s", restaurante[i][j].tipoComida);
            printf("PRECO MEDIO: R$ %.2f\n", restaurante[i][j].preco);

            printf("\n");
        }
        printf("\n");
    }
}


int main(void){

    int i, j, opt, lin, col;
    
    for(i=0; i<2; i++){
        for (j=0; j<2; j++){
            
            printf("NOME: ");
            fgets(restaurante[i][j].nome, 30, stdin);
            fflush(stdin);
            printf("ENDERECO: ");
            fgets(restaurante[i][j].endereco, 40, stdin);
            fflush(stdin);
            printf("TIPO DE COMIDA: ");
            fgets(restaurante[i][j].nome, 30, stdin);
            fflush(stdin);
            printf("PRECO MEDIO: ");
            scanf("%f", &restaurante[i][j].preco);
            fflush(stdin);
            printf("\n");
        }
        printf("\n");
    }

    do{
        printf("[1]MOSTRAR UM RESTAURANTE\n");
        printf("[2]MOSTRAR TODOS OS RESTAURANTES\n");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            printf("LINHA DA MATRIZ DESEJADA: ");
            scanf("%d", &lin);
            printf("COLUNA DA MATRIZ DESEJADA: ");
            scanf("%d", &col);
            
            mostraRestaurante(lin, col);
            break;

        case 2:
            mostraTodos();
            break;
        
        default:
            break;
        }
    }while(opt == 1 || opt == 2);
        

}