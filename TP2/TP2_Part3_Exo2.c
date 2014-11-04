
#include <stdio.h>
#include <stdlib.h>

/* Somme de deux fractions */
void SommeFrac(const int num1, const int den1, const int num2, const int den2, int *sumNum, int *sumDen);


int main(){
    int num1, num2, den1, den2, sumNum=0, sumDen=0;
    printf("Premiere fraction : \n");
    scanf("%d", &num1);
    scanf("%d", &den1);

    printf("Deuxieme fraction : \n");
    scanf("%d", &num2);
    scanf("%d", &den2);

    SommeFrac(num1, den1, num2, den2, &sumNum, &sumDen);

    printf("%d/%d+%d/%d=%d/%d\n", num1, den1, num2, den2, sumNum, sumDen);

    
    return 0;
}

void SommeFrac(const int num1, const int den1, const int num2, const int den2, int *sumNum, int *sumDen){
    /* Methode barbare : pas de simplification de la fraction */
	*sumNum=(num1*den2)+(num2*den1);
    *sumDen=(den1*den2);
    /*
        Essai de simplification...
        if(*sumNum%2==0 && *sumDen%2==0){
            *sumNum=1;
            *sumDen=1;
        }
    */
}
