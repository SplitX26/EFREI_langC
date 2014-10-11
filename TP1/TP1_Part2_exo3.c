#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=1, cptPos=0, cptNeg=0, cptZero=0;
    for (i; i<6;i++)
    {
        printf("\n\nnombre ? ");
        scanf("%d", &n);
        if (n>0){
            cptPos++;
            printf("%d est un nombre positif", n);
        }else if(n<0){
            cptNeg++;
            printf("%d est un nombre negatif", n);
        }else{
            cptZero++;
            printf("%d est nul", n);
        }
    }
    printf("\n\nIl y a %d nombres positifs, %d nombres negatif, %d zeros\n\n", cptPos, cptNeg, cptZero);
    return 0;
}
