#include <stdio.h>
#include <stdlib.h>

int main()
{
    float note1, note2, note3, coeff1, coeff2, coeff3, moyenne;
    printf("Note1= ");
    scanf("%f", &note1);
    printf("Coeff1= ");
    scanf("%f", &coeff1);
    printf("Note2= ");
    scanf("%f", &note2);
    printf("Coeff2= ");
    scanf("%f", &coeff2);
    printf("Note3= ");
    scanf("%f", &note3);
    printf("Coeff3= ");
    scanf("%f", &coeff3);
    moyenne= (note1*coeff1 + note2*coeff2 + note3*coeff3)/(coeff1 + coeff2 + coeff3);
    printf("Moyenne des notes= %f", moyenne);
    if (moyenne < 10)
        printf("    Non recu");
    else printf("    Admissible");
    return 0;
}
