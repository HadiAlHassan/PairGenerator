#include<stdio.h>
#include<stdlib.h>

/*
Author: Hadi Al Hassan
Date: Jan/03/2025

*/

void PrintPairs(int k) {

    for(int i = 1; i <= k; i++) {

        int j = k - i;

        if (j < 1) {
            break;
        }
        printf("(%d,%d) ", i, j);
    }

}

void PairGenerator(int N) {
    for (int k = 2; k <= N; k++) {
        PrintPairs(k);
        printf("\n");
    }
}


int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    PairGenerator(N);
    return 0;
}
