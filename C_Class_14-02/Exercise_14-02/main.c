#include <stdio.h>
#include <stdlib.h>

#define INT_MAX 5

int main()
{

    int mat[5][5], A, B;

    for(A = 0; A < INT_MAX; ++A){
       for(B = 0; B < INT_MAX; ++B) {
          printf("%d ", rand() % 10);
       }
    printf("\n");
    }
}
