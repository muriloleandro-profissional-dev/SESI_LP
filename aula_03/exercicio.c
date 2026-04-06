#include <stdio.h>

int main(){
    float vlr1, vlr2;
    char op;
    
    printf("Poderia me falar o primeiro número?");
    scanf("%f", &vlr1);
    
    printf("Poderia me falar o segundo número?");
    scanf("%f", &vlr2);
    
    printf("***********************\n");
    
    printf("Escolha a operação\n");
    printf("SOMA (+)\n");
    printf("DIMINUIÇÃO (-)\n");
    printf("MULTIPLICAÇÃO (*)\n");
    printf("DIVISÃO (/)\n");
    
    
    printf("Poderia me falar a operação? (+, -, /, *)");
    scanf("%s", &op);
    
    switch(op){
        case '+':
            printf("%2.f + %2.f = %2.f", vlr1, vlr2, vlr1 +vlr2);
            break;
        
        case '-':
            printf("%2.f - %2.f = %2.f", vlr1, vlr2, vlr1 - vlr2);
            break;
        
        case '/':
            printf("%2.f / %2.f = %2.f", vlr1, vlr2, vlr1 / vlr2);
            break;
        
        case '*':
            printf("%2.f * %2.f = %2.f", vlr1, vlr2, vlr1 * vlr2);
            break;
            
        default:
            printf("A opção foi inválida!");
            break;
        
    }
    
}