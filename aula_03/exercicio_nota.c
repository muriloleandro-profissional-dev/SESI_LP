#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 100
#define MAX_NOME 50

typedef struct {
    char nome[MAX_NOME];
    int numProvas;
    float notas[50];
    float media;
    float maior;
    float menor;
    char situacao[20];
} Aluno;

int main() {
    int numAlunos;
    Aluno alunos[MAX_ALUNOS];
    float somaTurma = 0;
    int i, j;
    int indiceMelhor = 0, indicePior = 0;

    printf("Digite o numero de alunos: ");
    scanf("%d", &numAlunos);

    for (i = 0; i < numAlunos; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]s", alunos[i].nome); // lê nome com espaços
        printf("Quantidade de provas: ");
        scanf("%d", &alunos[i].numProvas);

        alunos[i].maior = -1.0;
        alunos[i].menor = 11.0;
        float soma = 0;

        printf("Notas: ");
        for (j = 0; j < alunos[i].numProvas; j++) {
            scanf("%f", &alunos[i].notas[j]);
            soma += alunos[i].notas[j];
            if (alunos[i].notas[j] > alunos[i].maior)
                alunos[i].maior = alunos[i].notas[j];
            if (alunos[i].notas[j] < alunos[i].menor)
                alunos[i].menor = alunos[i].notas[j];
        }

        alunos[i].media = soma / alunos[i].numProvas;
        somaTurma += alunos[i].media;

        if (alunos[i].media >= 7.0)
            strcpy(alunos[i].situacao, "Aprovado");
        else if (alunos[i].media >= 5.0)
            strcpy(alunos[i].situacao, "Recuperacao");
        else
            strcpy(alunos[i].situacao, "Reprovado");

        // Atualiza melhor e pior aluno
        if (alunos[i].media > alunos[indiceMelhor].media)
            indiceMelhor = i;
        if (alunos[i].media < alunos[indicePior].media)
            indicePior = i;
    }

    // Relatório
    printf("\nRelatorio:\n\n");
    for (i = 0; i < numAlunos; i++) {
        printf("%s - Media: %.2f | Maior: %.2f | Menor: %.2f | %s\n",
               alunos[i].nome,
               alunos[i].media,
               alunos[i].maior,
               alunos[i].menor,
               alunos[i].situacao);
    }

    printf("\nMedia da turma: %.2f\n", somaTurma / numAlunos);
    printf("Melhor aluno: %s\n", alunos[indiceMelhor].nome);
    printf("Pior aluno: %s\n", alunos[indicePior].nome);

    return 0;
}