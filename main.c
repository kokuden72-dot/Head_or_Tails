#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int count = 0;
    printf("Tossing a coin...\n");
    printf("Round 1: ");
    if((rand() % 2) == 0) {
        printf("Heads\n");
        count++;
    } else {
        printf("Tails\n");
    }
    printf("Round 2: ");
    if((rand() % 2) == 0) {
        printf("Heads\n");
        count++;
    } else {
        printf("Tails\n");
    }
    printf("Round 3: ");
    if((rand() % 2) == 0) {
        printf("Heads\n");
        count++;
    } else {
        printf("Tails\n");
    }
    printf("Heads: %d, Tails: %d\n", count, 3 - count);
    return 0;
}