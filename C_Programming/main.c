#include <stdio.h>
#include <stdlib.h> //diretivas de compilação

int main()
{
    unsigned int ui;
    short int si, si3, si4;
    long int li = 400000000;
    short si2;
    long li2;

    int i = 10, i2;
    double d = 11.6; /*precisão muda entre double, float e int*/
    float f = 1.3f, f2;

    f2 = i + li;
    i2 = f;
    si = li;

    if (i2 < i){
        printf("i2 eh maior que i\n");
    }else{
    printf("i é maior que i2\n");
    }

    switch(i){
    case 0:
        /* Bloco de case 0 */
        break;
    case 1:
        /* Bloco de case 1 */
        break;
    case 2:
        /* Bloco de case 2 */
        break;
    default:

    }

    int ii = 10;
    for(ii = 0; ii < 10; ii += 2) {

    }

    while(){

    }
    do {

    }while();

    char c = 'a';

    printf("Valor de F2: %i, %f\n", i, f2);
    printf("Valor de I2: %i, %f\n", i2, f);
    printf("Valor de SI: %hi, %li\n", si, li);
    printf("Valor de C: \"%c\"\n", c);
    return 0;
}
