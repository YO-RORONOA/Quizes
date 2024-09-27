#include <stdio.h>

int main(void)
{
    float LO;
    float LA;
    float aire;
    float péri;

    printf("entrer la longueur de rectangle: ");
    scanf("%f", &LO);
    printf("\nentrer la largeur de rectangle: ");
    scanf("%f", &LA);

    aire = LO * LA;
    péri = 2 * (LA + LO);

    printf("laire de rectangle est %f \n", aire);
    printf("le périmétre de rectangle est %f \n", péri);
}