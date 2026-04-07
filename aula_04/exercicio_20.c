#include <stdio.h>
#include <string.h>

int main() {
    char senha[20];
    char senha_correta[] = "1234";

    do {
        scanf("%s", senha);
    } while(strcmp(senha, senha_correta) != 0);

    return 0;
}