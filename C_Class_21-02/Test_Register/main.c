#include <stdio.h>
#include <stdlib.h>

int main()
{
   struct endereco {
        char rua[10];
        char bairro[10];
        int numero;
   };

    struct endereco end;

    strcpy(end.rua, "Rua 10");
    strncpy(end.bairro, "Centro");
    end.numero = 100;

    printf("Rua: [%s]\n", end.rua);
    printf("Bairro: [%s]\n", end.bairro);
    printf("Numero: [%i]\n", end.numero);
    return 0;

}
