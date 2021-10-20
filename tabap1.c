#include<stdio.h>
int main()
{
int tab[50],i,n,s,j,tmp;
printf("entrer le nombre d'element: ");
scanf("%d",&n);                                //indentation du code!!!!!
for(i=0;i<=n-1;i++)
{
    printf("entrer une valeur : ");
    scanf("%d",&tab[i]);
}
/*printf("affichage des valeurs saisies\n");
for(i=0;i<=n-1;i++)
    printf("tab[%d]=%d\n",i,tab[i]);*/

for(i=0,s=0;i<=n-1;i++)
    s+=tab[i];

printf("la somme est :%d\n",s);
printf("la moyenne est :%0.2f\n",(float)s/n);
for(i=0,j=n-1;i<j;i++,j--)
{
    tmp=tab[j];
    tab[j]=tab[i];//a refaire avec le jeu d'indice!
    tab[i]=tmp;
}

for(i=0;i<=n-1;i++)
    printf("tab[%d]=%d\n",i,tab[i]);

for(i=0;i<=n-1;i++)
{
    for(j=0;j<=n-1;j++)
    {
    if(tab[j]>tab[j+1])
    {
tmp=tab[j+1];
tab[j+1]=tab[j];
tab[j]=tmp;
}
}
}
printf("affichage du tableau trie \n");
for(i=0;i<=n-1;i++)
    printf("tab[%d]=%d\n",i,tab[i]);


return 0;
}
