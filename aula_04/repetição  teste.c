#include <stdio.h>

int main()
{
    
    for(int i=0; i < 5; i = i+1){
        printf("%i Bom dia\n", i);
    }
   
    printf("                     \n");
    
    
    int y = 0;
    while(y < 5){
        printf("%i Boa tarde\n", y);
        y++;
    } 
       
    printf("                     \n");
    int x = 5;
    do {
        printf("%i Boa noite\n", x);
        x--;
    } while(x > 0); 

    return 0;
} 