/* Diretivas de compilação */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Função principal: ponto de entrada de execução */
int main()
{
    /********************* Estrutura: declaração de variáveis *********************/
    printf("----------\nDeclaracao de Variaveis:\n");

    /* Formato: <tipo> <nome var>[= <exp>] [, <nome var i>[= <exp>]] */

    /* Tipos Numéricos Inteiros */
    int i;             /* Inteiro de 32 bits:                          -2^31 (-2,147,483,648) => +2^31-1 (2,147,483,647) */
    long l;            /* (ou long int) Inteiro de pelo menos 32 bits: -2^31 (-2,147,483,648) => +2^31-1 (2,147,483,647) */
    long long ll;      /* (ou long int) Inteiro de 64 bits:            -2^63 (-9.22E18)       => +2^63-1 (9.22E18) */
    short s;           /* (ou short int) Inteiro de 16 bits:           -2^15 (-32,768)        => +2^15-1 (32,767) */
    unsigned int ui;   /* Inteiro de 32 bits sem sinal:                    0                  => +2^32-1 (4,294,967,295)*/
    unsigned long ul;  /* Inteiro de 64 bits sem sinal:                    0                  => +2^32-1 (4,294,967,295)*/
    unsigned short us; /* Inteiro de 16 bits sem sinal:                    0                  => +2^16-1 (65,535)*/

    /* Tipos Numéricos de Ponto Flutuante */
    float f;  /* Racional de 32 bits */
    double d; /* Racional de 64 bits */

    /* Tipo alfanumérico (caracteres) -> também é um tipo numérico */
    char c;

    /* Também podemos declarar múltiplas variáveis e atribuírmos valores em uma mesma instrução */
    int x, y, z = 10;
    double d2 = 10.3; /* 10 e 10.3 são literais numéricos inteiro e racional, respectivamente */
    char c2 = 'a';    /* 'a' é um literal alfanumérico, e está associado, por tabela, a algum código numérico
                        (por exemplo 'A' = 65, em ASCII) */

    /* Podemos utilizar o comando sizeof para obter o tamanho em bytes de um tipo ou variável */
    printf("Tamanho de um int: %i bytes\n", sizeof(int));
    printf("Tamanho de um long: %i bytes\n", sizeof(l));
    printf("Tamanho de um long long: %d bytes\n", sizeof(ll));
    printf("Tamanho de um short: %i bytes\n", sizeof(s));
    printf("---\nTamanho de um float: %i bytes\n", sizeof(f));
    printf("Tamanho de um double: %i bytes\n", sizeof(d));
    printf("---\nTamanho de um unsigned short: %i bytes\n", sizeof(us));
    printf("Tamanho de um unsigned int: %i bytes\n", sizeof(ui));
    printf("Tamanho de um unsigned long: %i bytes\n", sizeof(ul));
    printf("---\nTamanho de um char: %i bytes\n", sizeof(c));

    /********************* Estrutura: atribuição *********************/
    /* Formato: <nome var> = <exp> */
    /* <exp> é uma expressão que deve avaliar para um valor compatível com o tipo da variável à esquerda */
    printf("\n\n----------\nValores e atribuicoes:\n");
    x = z * 2;
    printf("Valor de x: %i\n", x);

    /* Se uma atribuição envolver tipos incompatíveis, ou a atribuição de um tipo "maior" para um tipo "menor",
       podemos ter warnings (algumas vezes não) e, quase sempre, perda de precisão. Trata-se de um aspecto que
       merece atenção, pois pode causar erros */
    s = d2;
    printf("Double d2 = %f para short s = %i\n", d2, s);

    ll = 50000000000000;
    i = ll;
    printf("Long long ll = %lli para int i = %i\n", ll, i);

    y = 65;
    c = y;
    printf("Int y = %i para char c = %c\n", y, c);

    y = c2;
    printf("Char c2 = %c para int y = %i\n", c2, y);

    /********************* Estrutura: desvio condicional *********************/
    printf("\n\n----------\nDesvio condicional (if, if-else, switch):\n");
    printf("Para os exemplos de desvio condicional, usaremos os valores de x = %i, y = %i e z = %i:\n", x, y, z);

    /* Desvio condicional simples
       if (<condição>) {
           <diretivas para o caso da condição ser verdadeira>
           Recomendação: sempre usar as chaves, mesmo quando temos apenas uma única diretiva no bloco
       }
    */
    printf("\n---\nDesvio condicional simples: if (x > z):\n");
    if (x > z) {
        printf("Diretiva (True): x eh maior que z\n");
    }
    printf("\tDiretiva seguinte 01\n");

    printf("\nDesvio condicional simples: if (x < z):\n");
    if (x < z) {
        printf("Diretiva (True): x eh menor que z\n");
    }
    printf("\tDiretiva seguinte 02\n");

    /* Desvio condicional composto
       if (<condição>) {
           <diretivas para o caso da condição ser verdadeira>
           Recomendação: sempre usar as chaves, mesmo quando temos apenas uma única diretiva no bloco
       } else {
           <diretivas para o caso da condição ser falsa>
       }
    */
    printf("\n---\nDesvio condicional composto: if (x > z) - else:\n");
    if (x > z) {
        printf("Diretiva (True): x eh maior que z\n");
    } else {
        printf("Diretiva (False): x nao eh maior que z\n");
    }
    printf("\tDiretiva seguinte 03\n");

    printf("\nDesvio condicional composto: if (x < z) - else:\n");
    if (x < z) {
        printf("Diretiva (True): x eh menor que z\n");
    } else {
        printf("Diretiva (False): x nao eh menor que z\n");
    }
    printf("\tDiretiva seguinte 04\n");

    /* Desvio condicional aninhado
       if (<condição 1>) {
           <diretivas para o caso da condição 1 ser verdadeira>
       } else if (<condição 2>) {
           <diretivas para o caso da condição 2 ser verdadeira>
       ...
       } else if (<condição n>) {
           <diretivas para o caso da condição 2 ser verdadeira>
       } else {
           <diretivas para o caso das condições de 1 a n serem falsas>
       }
    */
    printf("\nDesvio condicional aninhado: if (x < z) - else if (y < z) - else:\n");
    if (x < z) {
        printf("Diretiva (c1 = True): x eh menor que z\n");
    } else if (y < z) {
        printf("Diretiva (c2 = True): y eh menor que z\n");
    } else {
        printf("Diretiva (c1 = c2 = False): z eh maior que x e y\n");
    }
    printf("\tDiretiva seguinte 05\n");

    /* Desvio condicional múltiplo
        switch (<variável inteira>) {
            case 1:
                <diretivas para o caso da variável resolver para 1>
                break;
            case 2:
                <diretivas para o caso da variável resolver para 2>
                break;
            ...

            case n:
                <diretivas para o caso da variável resolver para n>
                break;
            default:
                <diretivas para o caso da variável não resolver nenhum dos valores definidos>
        }
    */
    srand(time(0)); /* Reinicia o gerador de números randômicos */
    x = (rand() % 5) + 1; /* Valor randômico no intervalo [1, 5] */
    printf("/nValor gerado para x: %i\n", x);
    printf("\nDesvio condicional multiplo: switch(x) - case:\n");
    switch (x) {
    case 1:
    case 2:
        printf("Diretiva cases 1 e 2: x eh 1 ou 2\n");
        break;
    case 3:
        printf("Diretiva case 3: x eh 3\n");
        break;
    case 4:
        printf("Diretiva case 4: x eh 4\n");
        break;
    default:
        printf("Diretiva default: x nao esta em {1, 2, 3, 4}\n");
    }

    /********************* Estrutura: repetição *********************/
    printf("\n\n----------\nRepeticao (for):\n");
    printf("FOR: geralmente utilizado quando a repeticao deve ser realizada por contagem (numero determinado de vezes)\n");

    /*
       for ([<inicialização do controle>]; [<condição para próxima iteração>]; [<incremento/decremento do controle>])
       {
            <diretivas que devem ser repetidas>
       }

    */
    int ii; /* Variável de controle */
    printf("Controle: [0, %i[\n", x);
    for (ii = 0; ii < x; ++ii) {
        printf("\tFOR: passo %i\n", ii);
    }
    printf("FOR: finalizado (controle = %i)\n", ii);

    printf("\nContagem regressiva: [%i, 0]\n", ii);
    for (; ii >= 0; --ii) {
        printf("\tFOR: passo %i\n", ii);
    }
    printf("FOR: finalizado (controle = %i)\n", ii);

    printf("\n\n----------\nRepeticao (while):\n");
    printf("WHILE: geralmente utilizado quando a repeticao deve prosseguir enquanto uma condicao eh verdadeira\n");

    /*
       while (<condição para próxima iteração>)
       {
            <diretivas que devem ser repetidas>
       }

    */

    printf("\nVamos repetir enquanto numeros gerados sao pares, maiores que 10\n", x);
    ii = (rand() % 100) + 1; /* Número aleatório entre 1 e 100 */
    printf("WHILE (antes): controle = %i\n", ii);
    while (ii > 10 && (ii % 2 == 0 )) {
        ii = (rand() % 100) + 1;
        printf("\tWHILE: controle = %i\n", ii);
    }
    printf("WHILE (depois): controle = %i\n", ii);

    printf("\n\n----------\nRepeticao (do-while):\n");
    printf("do-while: geralmente utilizado quando a repeticao deve prosseguir enquanto uma condicao eh verdadeira, ");
    printf("mas uma iteracao deve ser realizada de qualquer forma\n");

    /*
       do {
            <diretivas que devem ser repetidas>
       } while (<condição para próxima iteração>);

    */
    printf("\nVamos repetir enquanto numeros gerados sao impares, maiores que 10\n", x);
    ii = ((rand() % 50) + 1) * 2; /* Número par aleatório entre 1 e 100 */
    printf("DO-WHILE (antes): controle = %i\n", ii);
    do {
        ii = (rand() % 100) + 1;
        printf("\tDO-WHILE: controle = %i\n", ii);
    } while (ii > 10 && (ii % 2 != 0 ));
    printf("DO-WHILE (depois): controle = %i\n", ii);

    return 0;
}
