#include<stdio.h>

int main()
{
int div,dis;
printf("entrer dividende: ");
scanf("%d",&div);
printf("entrer diviseur: ");
scanf("%d",&dis);
printf("le quotient de la division entiere est %d\n", div/dis);
printf("le reste de la division entiere est %d\n", div%dis);
printf("le quotient rationnel est %f\n",(float)div/dis);/*le resultat
 sera de type float car float est
 superieur a int en terme d'occupation de la memoire*/
return 0;
}
