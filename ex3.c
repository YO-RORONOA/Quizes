#include <stdio.h>

int main(void) {
    int num;
    int i = 2;

    printf("le nombre n est un nombre entier ou non?\n");
    printf("enter the number you want to check: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("ce n'est pas un nombre premier\n");
        return 0;
    }

    while (i < num) {
        if (num % i == 0) {
            printf("ce n'est pas un nombre premier\n");
            return 0; 
        }
        i++;
    }

    printf("c'est un nombre premier\n");
    return 0;
}