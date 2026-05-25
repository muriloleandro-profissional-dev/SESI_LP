#include <stdio.h>
#include <unistd.h>

void espaco(){
    
    printf("\n");
    
}

int main() {

    int numeros[9999];
    int contador=0;
    int numero_escondido = 9;
    int contador_vitorias=0;
    
    printf("Este é um jogo que consiste em adivinhar um número surpresa,");
    printf("\nIremos fazer perguntas até você acertar");
    espaco();
    
    printf("\nRegras: ");
    printf("\n ______________________________");
    printf("\n| Não vai ter números decimais |");
    sleep(1);
    printf("_________");
    printf("\n| O programa só acaba quando você quiser |");
    printf("\n ________________________________________");
    
    espaco();
    for(int i=0; i < 9999; i++){
        
        
        int saida=0;
        
        sleep(1);
        
        printf("\nMe fale um número e eu direi o quão perto ele está do número escondido: ");
        scanf("%i", &numeros[i]);
        
        printf("\n  __");
        printf("\n| %i |", numeros[i]);
        printf("\n  __");
        
        sleep(1);
        
        if(numeros[i] == numero_escondido){
            contador_vitorias++;
            printf("\nO número está certo!");
            numero_escondido = numero_escondido + 6;
            espaco();
            
            sleep(1);
            
            printf("\nVocê acertou, gostaria de sair do programa? 1 para sim e 2 para não: ");
            scanf("%i", &saida);
            
            if(saida == 1){
                printf("\nSaindo");
                break;
            }
            else if(saida == 2){
                sleep(1);
                printf("\nOK, continuando");
            }
        }
        else{
            
            printf("\nO número está errado, iremos te ajudar se ele estiver perto!");
            
            if(numeros[i] >= numero_escondido - 3 && numeros[i] <= numero_escondido + 3) {
                printf("\nVoce esta muito perto! Diferenca de no maximo 3.");
            }
            espaco();
            contador++;
        }
        
    }
    
    sleep(2);
    printf("\nVocê errou %i vezes.", contador);
    printf("\nVocê acertou %i vezes.", contador_vitorias);

}
