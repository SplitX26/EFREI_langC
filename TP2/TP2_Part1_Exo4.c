//  TP2
//  Partie 1 Exercice 4
//
//  Created by Jerome on 06/10/2014.
//  Copyright (c) 2014 Jerome. All rights reserved.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb_mystere, nb, compteur=0;
    printf("Saisir le nombre mystere: ");
    scanf("%d", &nb_mystere);
    do
    {
        printf("Saisir un nombre: ");
        scanf("%d", &nb);
        compteur++;
        if (nb>nb_mystere)
            printf("C'est moins!\n\n");
        else if (nb<nb_mystere)
            printf("C'est plus !\n\n");
        else printf("Gagne en %d coup(s)\n\n", compteur);
    }while (nb!=nb_mystere && compteur<=10);
    if (compteur>10)
        printf("PERDU!!!!!");
    return 0;
}
