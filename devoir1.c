#include<stdio.h>
int main()
{
int jour,mois, annee,donnee;
 printf("entrez la date (jour mois annee) :") ;
 donnee=scanf("%d %d %d",&jour,&mois,&annee);
/* scanf("%d",&jour);
 scanf("%d",&mois);
 scanf("%d",&annee);*
 printf("donnees recues: 3\n");*/
 printf("donnees recues :%d\n",donnee);
 printf("jour : %d\n",jour);
 printf("mois : %d\n",mois);
 printf("annee: %d\n",annee);
 return 0;
}
