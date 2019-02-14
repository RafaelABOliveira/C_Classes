#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM_VET 100
#define MAX_VAL 1000

int main()
{

    //Declara o Vetor
    int vet[100];

    //Preencher o vetor
    srand(time(0));
    int ii;
    for(ii=0; ii < TAM_VET; ++ii){
        vet[ii] = (rand() % 1000) + 1;
    }

    //Ler valor do teclado
    int valor;
    do{
    printf("Informe um valor entre [1, %i]\n", MAX_VAL);
    scanf(" %i", &valor);
    } while(valor < 1 || valor > MAX_VAL);
    printf("Valor escolhido: %i\n", valor);

    for(ii = 0; ii<TAM_VET; ++ii){
        if(vet[ii] == valor){
            printf("Valor encontrado: vet[%i]\n", ii);
        }
    }

}
