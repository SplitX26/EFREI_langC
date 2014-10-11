#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb1, nb2, nb3;
    printf("Nombre1= ");
    scanf("%d", &nb1);
    printf("Nombre2= ");
    scanf("%d", &nb2);
    printf("Nombre3= ");
    scanf("%d", &nb3);
    if (nb1 < nb2)
        if (nb1 < nb3)
            if (nb2 < nb3)
                printf("%d < %d < %d", nb1, nb2, nb3);
            else printf("%d < %d < %d", nb1, nb3, nb2);
        else printf("%d < %d < %d", nb3, nb1, nb2);
    else if (nb1 < nb3)
        printf("%d < %d < %d", nb2, nb1, nb3);
        else if (nb2 < nb3)
            printf("%d < %d < %d", nb2, nb3, nb1);
        else printf("%d < %d < %d", nb3, nb2, nb1);
    return 0;
}
