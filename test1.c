#include <stdio.h>
int main(){

int A, i, f = 1;
 
  printf(" DONNEZ UN NOMBRER POUR LE CALCULE :\n");
  scanf("%d", &A);
 if (A == 0)
    {
        printf("%d!=1", A);
    }
    else if (A < 0)
    {
        printf("ce nest pas possible de calculer factorielle de %d", A );
    }
    else{ 
  for (i = 1; i <= A; i++)
    f = f * i;
 
  printf("la Factorielle de %d = %d\n", A, f);
   }
  return 0;
  
}