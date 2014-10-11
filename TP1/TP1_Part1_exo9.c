#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Programme qui affiche :
        - soit "Bonjour madame"
        - soit "Bonjour mademoiselle"
        - soit "Bonjour monsieur"
        selon le sexe et l'etat marital de la personne.
    */

    char sexe = '\0', reponse = '\0';

    do
    {
        printf("Votre sexe (F : Femme, H : Homme) : ");
        scanf("%c", &sexe);
        sexe = toupper(sexe);
    } while (sexe != 'F' && sexe != 'H');


    // Pour un homme
    if (sexe == 'H')
        printf("Bonjour Monsieur !\n");
    // Pour une femme (2 cas, mariÈe ou non)
    else
    {
        do
        {
            // Vider le Buffer
            int c;
            while ((c = getchar ()) != '\n' && c != EOF);

            printf("Etes-vous marie ? (O : oui, N : non) : ");
            scanf("%c", &reponseStatut);
            reponseStatut = toupper(reponseStatut);
        } while (reponseStatut != 'O' && reponseStatut != 'N');

        // Cas du mariage
        if (reponseStatut == 'O')
            printf("Bonjour Madame !\n");

        // Cas du non mariage
        else
            printf("Bonjour Mademoiselle !\n");
    }

    return 0;
}