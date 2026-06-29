#include <stdio.h>

int main(){
    char username[100];
    printf("Who are you?\n");
    scanf("%s", username);
    printf("Hello, %s!\n", username);
    return 0;
}