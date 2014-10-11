#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, n, puissance;
    printf("a ? ");
    scanf("%d",&a);
    do
    {
        printf("n ? ");
        scanf("%d",&n);
    } while (n<0);
    puissance= pow(a,n);
    printf("a^n= %d", puissance);
    return 0;
}
