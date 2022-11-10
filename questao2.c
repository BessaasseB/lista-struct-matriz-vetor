#include <stdio.h>
#include <string.h>


typedef struct cadastro{
    
    float media;
    char nome[50], naturalidade[30], turma, sexo, aprovado;
    int matricula, serie, anoNasc;

} cadastro;

cadastro aluno[3];

void cadastraAluno(){

    for (int i = 0; i < 1; i++){

        printf("NUMERO DE MATRICULA: ");
        scanf("%d", &aluno[i].matricula);
        fflush(stdin);
        printf("NOME: ");
        fgets(aluno[i].nome, 50, stdin);
        fflush(stdin);
        printf("SERIE: ");
        scanf("%d", &aluno[i].serie);
        fflush(stdin);
        printf("TURMA: ");
        scanf("%c", &aluno[i].turma);
        fflush(stdin);
        printf("SEXO: ");
        scanf("%c", &aluno[i].sexo);
        fflush(stdin);
        printf("MEDIA: ");
        scanf("%f", &aluno[i].media);
        fflush(stdin);
        printf("APROVADO: ");
        scanf("%c", &aluno[i].aprovado);
        fflush(stdin);
        printf("ANO DE NASCIMENTO: ");
        scanf("%d", &aluno[i].anoNasc);
        fflush(stdin);
        printf("NATURALIDADE: ");
        fgets(aluno[i].naturalidade, 30, stdin);
        fflush(stdin);

        printf("\n");
    }
    
}

void printaCadastro(){

    for(int i = 0; i < 1; i++){

        printf("NOME: %s", aluno[i].nome);
        printf("MATRICULA: %d\n", aluno[i].matricula);
        printf("SERIE: %d\n", aluno[i].serie);
        printf("TURMA: %c\n", aluno[i].turma);
        printf("SEXO: %c\n", aluno[i].sexo);
        printf("MEDIA: %.2f\n", aluno[i].media);
        printf("APROVADO: %c\n", aluno[i].aprovado);
        printf("ANO DE NASCIMENTO: %d\n", aluno[i].anoNasc);
        printf("NATURALIDADE: %s\n", aluno[i].naturalidade);

        printf("\n");
    }

}

void aprovados(){

    float countAprovados=0, countAlunos, countReprovados=0;
    int i;

    for(i = 0; i < 1; i++){

        if (aluno[i].aprovado == 's'){
            
            countAprovados++; 

        }
        else{
            countReprovados++;
        }
    }

    printf("APROVADOS: %2.f porcento\n", (countAprovados/i)*100);

}

int main(void){

    int opt;

    do{
        printf("MENU\n");
        printf("[1]CADASTRAR ALUNOS\n");
        printf("[2]MOSTRAR ALUNOS\n");
        printf("[3]PORCENTAGEM DE ALUNOS APROVADOS E REPROVADOS\n");
        printf("[4]PORCENTAGEM DE HOMENS E MULHERES\n");
        printf("[5]MEDIA DAS IDADES\n");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            cadastraAluno();
            break;
        
        case 2:
            printaCadastro();
            break;
        
        case 3:
            aprovados();
            break;
        
        case 4:
            cadastraAluno();
            break;

        case 5:
            cadastraAluno();
            break;
        
        default:
            break;
        }
    }while (opt < 6 && opt > 0);
    
    
        

    


    return 0;
}