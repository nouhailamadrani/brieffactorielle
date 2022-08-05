#include <stdio.h>
int factorial(int A)
{
    int i;
    int f = 1;

    for (i = 1; i <= A; i++)
        f = f * i;

    return f;
}

int main()
{
    int B;

    printf(" donner un nombre pour le calcule  : \n");
    scanf("%d", &B);
    if (B == 0)
    {
        printf("%d!=1", B);
    }
    else if (B < 0)
    {
        printf("ce nest pas possible de calculer factorielle  par ce que negatif  %d", B);
    }
    else
        printf("%d! = %ld\n", B, factorial(B));

    return 0;


}