//
//  Partie 1 Exercice 5
//
//  Created by Alexandre on 28/09/2014.
//  Copyright (c) 2014 Alexandre. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	int centuries=0, years=0, months=0, weeks=0, days=0, remainders=0;

    do
    {
        printf("Saisir un nombre de jours : ");
        scanf("%d", &days);
    } while (days < 0);

    centuries = days / (360 * 100);
    remainders = days - (centuries * (360 * 100));

    years = remainders / 360;
    remainders = days - ((centuries * (360 * 100)) + years * 360);

    months = remainders / 30;
    remainders = days - ((centuries * (360 * 100)) + years * 360 + months * 30);

    weeks = remainders / 7;

    remainders = days - ((centuries * (360 * 100)) + years * 360 + months * 30 + weeks * 7);

    /* Display result */
    /* Days */
    if (days == 1){
    	printf("%d jour <==>", days);
    }else{
    	printf("%d jours <==>", days);
    }
    /* Centuries */
    if (centuries == 1){
    	printf(" %d siecle,", centuries);
    }else{
    	printf(" %d siecles,", centuries);
    }
    /* Years */
    if (years > 1){
        printf(" %d annees,", years);
    }else{
        printf(" %d annee,", years);
    }
    /* Months */
    printf(" %d mois,", months);
    if (weeks > 1)
        printf(" %d semaines,", weeks);
    else
        printf(" %d semaine,", weeks);
    /* Reste */
    if (remainders > 1){
        printf(" %d jours.\n", remainders);
    }else{
        printf(" %d jour.\n", remainders);
    }

	return 0;
}