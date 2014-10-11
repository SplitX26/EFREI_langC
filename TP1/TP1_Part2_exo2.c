#include <stdio.h>
#include <stdlib.h>

int main()
{
    int compteur=0;
    int i=11;
    for (i;i<120;i++)
    {
        if ((i%2 !=0) && (i%3 != 0) && (i%5 != 0) && (i%7 != 0))
            printf("%d\n", i);
            compteur++;
    }
    printf("compteur= %d", compteur);
     return 0;
}
