#include <stdio.h>

int main()
{
    int numero[5];
    
    for(int i=0; i < 5; i++){
        
        printf("\nMe diga o %i número inteiro: ", i+1);
        scanf("%i", &numero[i]);

        printf("%i", numero[i]);

    }

}