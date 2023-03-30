#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 7
int main () {
    int i,j;
    float mt[N][M];
    float *Pmt;
    Pmt = mt; // me salta error pero no se a que se debe

    for(i = 0;i<N; i++) {
        for(j = 0;j<M; j++) {
            *Pmt= 1 + rand()%100;
            printf("\n%.2f", *Pmt);
            Pmt++;
        }
    printf("\n\n");
    }
    return 0;
}