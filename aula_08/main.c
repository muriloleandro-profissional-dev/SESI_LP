#include <stdio.h>

int conta_soma(int a, int b){
    
    return a + b;
}

int diminuicao(int a, int b){
    
    return a - b;
}

int multiplicacao(int a, int b){
    
    return a * b;
}

int divisao(int a, int b){
    
    return a / b;
}

void espacamento(){
    
    printf("\n");
    
}

int main(){

    int n1, n2;
    int soma=0;
    char operacao;
    
    printf("\nDigite 1 para somar");
    printf("\nDigite 2 para diminuir");
    printf("\nDigite 3 para multiplicação");
    printf("\nDigite 4 para divisão");
    
    espacamento();
    
    printf("\nA conta que vai acontecer será o número A pelo B.");
    
    espacamento()

    printf("\nMe fale qual tipo de operação você quer.");
    scanf("%c", &operacao);
    
    
    printf("\nDigite primeiro valor: ");
    scanf("%i", &n1);
    
    printf("\nDigite segundo valor: ");
    scanf("%i", &n2);
    
    if(operacao == '1'){
        soma = conta_soma(n1, n2);
    }
    else if(operacao == '2'){
        soma = diminuicao(n1, n2);
    }
    else if(operacao == '3'){
        soma = multiplicacao(n1, n2);
    }    
    else if(operacao == '4'){
        soma = divisao(n1, n2);
    }
    else{
        printf("ERRADO!");
    }

    
    printf("\nA soma dos dois valores é: %i", soma);
    printf("\n 5+5 = %i", conta_soma(5, 5));
    printf("\n 3+15 = %i", conta_soma(3, 15));
    
}