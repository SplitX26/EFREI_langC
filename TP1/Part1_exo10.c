/* Partie 1 Exercice 10 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    float P, total;
    printf("Nombre de pommes ? ");
    scanf("%d", &N);
    printf("Prix d'une pomme ? ");
    scanf("%f", &P);
    if (N > 5)
        total= N*P*0.95;
    else if (N >= 3 && N <= 5)
        total= N*P*0.97;
    else total= N*P;
    printf("\nTotal a payer = %f euros", total);
    return 0;
}
