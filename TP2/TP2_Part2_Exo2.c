#include <stdio.h>
#include <stdlib.h>

int LirePositif(){
    int entier;
    do{
        printf("Entrer un chiffre entier : ");
        scanf("%d", &entier);
        if(entier>=0){
            return entier;
        }
    }while(entier<0);
    return -1;  
}
int main()
{
    printf("%d\n", LirePositif());
    return 0;
}
