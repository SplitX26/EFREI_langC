//  TP2
//  Partie 1 Exercice 5 Question 1
//
//  Created by Jerome on 06/10/2014.
//  Copyright (c) 2014 Jerome. All rights reserved.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix=0;
    do
    {
        printf("\n\nMENU\n\n1.Royal Cheese\n2.Royal Farmer\n3.Big Mac\n4.Le 280\n\n\nChoisissez un menu: ");
        scanf("%d",&choix);
        switch (choix)
        {
            case 1: printf("Tres bon choix, 5.50euros");break;
            case 2: printf("Pas mal, 6.00euros");break;
            case 3: printf("Excellent, 7.00 euros");break;
            case 4: printf("Excellent choix, 3.00euros");break;
            case 69 : printf("Vous avez entre la valeur de sortie de boucle.\n");break;
            default: printf("Ce menu n'existe pas\n");break;
        }
    }while (choix!=69);
    return 0;
}
