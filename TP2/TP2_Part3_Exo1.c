
#include <stdio.h>
#include <stdlib.h>

/* Passage par valeur des adresss des deux arguments */
void echangeBidon(int value1, int value2);

/* Passage par valeur des adresss des deux arguments */
void swap(int *value1, int *value2);

int main(){
    int a=2, b=3;
    printf("Avant : %d, %d\n", a, b);
    echangeBidon(a,b);
    printf("Apres : %d, %d\n", a, b);
    printf("\n");
    printf("Avant : %d, %d\n", a, b);
    swap(&a,&b);
    printf("Apres : %d, %d\n", a, b);
    
    return 0;
}

void echangeBidon(int value1, int value2){
	printf("Avant (dans la fonction) : %d, %d\n", value1, value2);
    int temporaire = value1;
    value1 = value2;
    value2 = temporaire;
    printf("Apres (toujours dans la fonction) : %d, %d\n", value1, value2);
    printf("Swap effectué mais uniquement a l'interieur de la fonction ! \n");
}

void swap(int *value1, int *value2){
    int temporaire = *value1;
    *value1 = *value2;
    *value2 = temporaire;
    printf("swap done ! \n");
}