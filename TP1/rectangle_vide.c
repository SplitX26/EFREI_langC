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
    printf("Saisir la longueur : ");
    scanf("%d", &longueur);
    
    printf("Saisir la largeur : ");
    scanf("%d", &largeur);
    
    printf("\n");
    
    for(int i=0; i<largeur;i++){
        for(int j=0; j<longueur;j++){
            if(i==0 || i==largeur-1){
                printf("*");
                
            }else{
                if(j<1 || j>longueur-2){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
