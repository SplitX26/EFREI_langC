#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix=0;
    int nb_mystere, nb, compteur=0, somme=0, moyenne=0;
    char c, charactere, number;

    do
    {
        printf("\
            MENU\n\
            1.Test sur les caracteres\n\
            2.Affichage de caracteres et de leur code ASCII\n\
            3.Arret d’une saisie grace a une valeur\n\
            4.Recherche d’un nombre cache\n\
            5.Quitter le programme\n\
            Choisissez un menu: ");
        scanf("%d",&choix);
        switch (choix){
            case 1: printf("Test sur les caracteres\n");
                    printf("--\n");
                    printf("Tapez un caractere: ");
                    scanf("%c", &c);
                    if (('a'<=c) && (c<='z')){
                        printf("c'est une lettre minuscule");
                    }else if (('A'<=c) && (c<='Z')){
                        printf("c'est une lettre majuscule");
                    }else if (('0'<=c) && (c<='9')){
                        printf("c'est un chiffre");
                    }else{
                        printf("C'est un caractere non alphanumerique");
                    }
                    break;
            case 2: printf("Affichage de caracteres et de leur code ASCII\n");
                    printf("--\n");
                    for (charactere=65; charactere<91;charactere++){
                        printf("%c, %d\n", charactere, charactere);
                    }
                    for (number=46; number<58;number++){
                        printf("%c, %d\n", number, number);
                    }
                    break;
            case 3: printf("Arret d’une saisie grace a une valeur\n");
                    printf("--\n");
                    nb=0; compteur=0;
                    do{
                        printf("Entrez un nombre: ");
                        scanf("%d", &nb);
                        if(nb>=0){
                            somme+=nb;
                            compteur++;
                        }
                    }while(nb>=0);
                    moyenne= somme/compteur;
                    printf("moyenne: %d",moyenne);
                    break;
            case 4: printf("Recherche d’un nombre cache\n");
                    printf("--\n");
                    nb=0; compteur=0;
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
                    break;
            case 5 : printf("Vous avez entre la valeur de sortie de boucle.\n");break;
            default: printf("Ce menu n'existe pas\n");break;
        }
    }while (choix!=5);
    return 0;
}
