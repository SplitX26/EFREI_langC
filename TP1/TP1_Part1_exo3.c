//
//  Partie 1 Exercice 3
//
//  Created by Alexandre on 28/09/2014.
//  Copyright (c) 2014 Alexandre. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb1 = 0, nb2 = 0;

    do
    {
        printf("Saisir nombre 1 (superieur ou egal a 100): ");
        scanf("%d", &nb1);
    } while (nb1 < 100);

    do
    {
        printf("Saisir nombre 2 (superieur ou egal a 100): ");
        scanf("%d", &nb2);
    } while (nb2 < 100);

    printf("\nNombre 1 = %d\n", nb1);
    printf("Nombre 2 = %d\n\n", nb2);

    printf("Somme = %d\n\n", nb1 + nb2);

    /* Cas possibles : Multiple de 2 / Multiple de 3 / Multiple de 2 et de 3 */
    if (nb1 % 2 == 0 && nb1 % 3 == 0)
        printf("%d  Divisible par 2 et par 3\n", nb1);

    else if (nb1 % 2 == 0)
        printf("%d  Divisible par 2\n", nb1);

    else if (nb1 % 3 == 0)
        printf("%d  Divisible par 3\n", nb1);

    if (nb2 % 2 == 0 && nb2 % 3 == 0)
        printf("%d  Divisible par 2 et par 3\n", nb2);

    else if (nb2 % 2 == 0)
        printf("%d  Divisible par 2\n", nb2);

    else if (nb2 % 3 == 0)
        printf("%d  Divisible par 3\n", nb2);

    return 0;
}
