#include <stdio.h>

int main(){
    float n1, n2, n3, nota_final;
    
    printf("Me diga a primeira nota");
    scanf("%f", &n1);
    
    printf("Me diga a segunda nota");
    scanf("%f", &n2);
    
    printf("Me diga a terceira nota");
    scanf("%f", &n3);
    
    nota_final = (n1 + n2 + n3) / 3;

    if (nota_final >= 7){
        printf("APROVADO!");
        
    }    
    
    else if (5 < nota_final < 7){
        printf("RECUPERAÇÃO");
    }
    
    else{
        printf("REPROVADO");
        
    }
}