#include <stdio.h>

int main(){
    int ano;

    printf("Digite seu ano de nascimento: ");  
    scanf("%i", &ano);
    
    printf("Sua idade é:  %i anos", 2026 - ano);
}