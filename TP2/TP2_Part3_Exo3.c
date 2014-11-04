
#include <stdio.h>
#include <stdlib.h>

/* Transformation d'un caractère minuscule en majuscule */
int TransformeMinMaj(char c);

void lectureChaine(char *c);


int main(){
    TransformeMinMaj('c');
    printf("\n");
    lectureChaine("a4H3n");
    return 0;
}

int TransformeMinMaj(char c){
    /* 
        Valeurs ASCII 
        97 à 122 : MIN
        65 à 90 : MAJ
        97-65=32

    */
    if((96<c && c<123) || (65<c && c<91)){
        if((96<c) && (c<123)){
            printf("%c", (c-32));
        }
        return 1;
    }
    return -1;
}

void lectureChaine(char *c){
    for(;*c!='\0';c++){
        if(*c>=65 && *c<=90){
            printf("%c",*c);
        }else{
            TransformeMinMaj(*c);
        }
    }
    printf("\n");
}
