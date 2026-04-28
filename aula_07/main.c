#include <stdio.h>

int main(){

    int matriz[4][4];
    
    for(int l=0; l < 4; l++){
        
        for(int c=0; c < 4; c++){
            
            printf("Número da linha %i: e coluna %i: :  ", l+1, c+1);
            scanf("%i", &matriz[l][c]);
            
        }
        
    }
    
    for(int l=0; l < 4; l++){
        
        for(int c=0; c < 4; c++){
            
            printf(" | %i", matriz[l][c]);
            
        }
        
        printf("\n");
        
    }
    

}