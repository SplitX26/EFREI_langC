//  TP2
//  Partie 1 Exercice 3
//
//  Created by Jerome on 06/10/2014.
//  Copyright (c) 2014 Jerome. All rights reserved.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb, somme=0, compteur=0, moyenne;
    do
    {
        printf("Entrez un nombre: ");
        scanf("%d", &nb);
        if(nb>=0){
            somme+=nb;
            compteur++;
        }
    }while(nb>=0);
    moyenne= somme/compteur;
    printf("moyenne: %d",moyenne);
    return 0;
}
