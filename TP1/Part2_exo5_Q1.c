#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, n, puissance=0;
    printf("a ? ");
    scanf("%d",&a);
    do
    {
        printf("n ? ");
        scanf("%d",&n);
    } while (n<0);

    do
    {
        puissance += pow(a,n);
        n--;
    } while (n>=0);
    
    printf("Resulat : %d\n", puissance);
    return 0;
}
