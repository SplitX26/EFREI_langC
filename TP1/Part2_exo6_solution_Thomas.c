#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Programme qui :
        - lit 2 entiers positifs long et large entrés par l’utilisateur
        - affiche un rectangle plein de longueur long et de largeur large.
        - affiche affiche un rectangle vide.
        Exemple :
        Pour long = 7 et large = 5, le premier rectangle est plein et le second est vide donne :

        * * * * * *             * * * * * * *
        * * * * * *             *           *
        * * * * * *             *           *
        * * * * * *             *           *
        * * * * * *             * * * * * * *
    */

    int longueur = 0, largeur = 0;
    int i = 0, j = 0;

    printf("Saisir la longueur : ");
    scanf("%d", &longueur);

    printf("Saisir la largeur : ");
    scanf("%d", &largeur);

    // Tracer le rectangle plein
    for (i = 0; i < largeur; i++)
    {
        for (j = 0; j < longueur; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // *** Tracer le rectangle vide ***

    // Tracer la premiere ligne
    for (i = 0; i < longueur; i++)
    {
        printf("*");
    }

    printf("\n");

    // Tracer le coeur (sans la dernière ligne
    for (i = 1; i < largeur-1; i++)
    {
        for (j = 0; j < longueur; j++)
        {
            if (j == 0)
                printf("*");
            else if (j == (longueur - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // Tracer la dernière ligne
    for (i = 0; i < longueur; i++)
    {
        printf("*");
    }

    printf("\n");



    // Méthode 2

    // Tracer la premiere ligne
    for (i = 0; i < longueur; i++)
    {
        printf("*");
    }

    printf("\n");

    // Tracer le coeur (sans la dernière ligne
    for (i = 1; i < largeur-1; i++)
    {
        for (j = 0; j < longueur; j++)
        {
            if (j == 0)
                printf("*");
            else if (j == (longueur - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // Tracer la dernière ligne
    for (i = 0; i < longueur; i++)
    {
        printf("*");
    }


    return 0;
}
