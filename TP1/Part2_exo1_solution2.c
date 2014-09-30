#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb1,nb2,nb3;
    int tmp=0;
    printf("Nombre 1= ");
    scanf("%d", &nb1);
    printf("Nombre 2= ");
    scanf("%d", &nb2);
    printf("Nombre 3= ");
    scanf("%d", &nb3);
    printf("Init %d, %d, %d\n", nb1, nb2, nb3);
    
    if(nb1<nb2){
        tmp=nb1;
        nb1=nb2;
        nb2=tmp;
    }
    if(nb1<nb3){
        tmp=nb1;
        nb1=nb3;
        nb3=tmp;
    }
    if(nb2<nb3){
        tmp=nb3;
        nb3=nb2;
        nb2=tmp;
    }
    printf("%d < %d < %d\n", nb3, nb2, nb1);
    return 0;
}
