#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char username[100];
    printf("Who are you?\n");
    scanf("%s", username);
    printf("Hello, %s!\n", username);
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
    if(count<2) {
        printf("%s lose!\n", username);
    } else {
        printf("%s win!\n", username);
    }
    return 0;
}