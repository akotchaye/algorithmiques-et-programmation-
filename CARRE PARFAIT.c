#include<stdio.h>
/**procedure d'initialisation(reussi)*/
void init(int n,int tab[50][50])
{
int i,j,x,y;
for(i=0;i<=n-1;i++)
{
  for(j=0;j<=n-1;j++)
  tab[i][j]=0;
}
x=n-1;
y=(((n+1)/2)-1);
tab[x][y]=1;
}
/**procedure d'affichage du tableau(reussi)*/
void afftab(int n,int tab[50][50])
{
int i,j;
for(i=0;i<=n-1;i++)
 {
  for(j=0;j<=n-1;j++)
    printf("%d ",tab[i][j]);
    printf("\n");
 }
}
/**fonction de remplissage du carre magique*/
void remptab(int n,int tab[50][50])
{
 int i,j,k,x,y,tmp;
 x=n-1;
 y=(((n+1)/2)-1);
 for(i=2;i<=n*n-2;i++,x++,y++)
 {
 if(x>=n-1)
  tab[x-n+1][y+1]=i;
 if(tab[x][y+1]==0)
  tab[x+1][y+1]=i;
 if(y>=n-1)
 tab[x+1][y-n+1]=i;
 }

}

 /** while(tab[x][y+1]==0&&(x==n-1||y==n-1))
  {
   tab[x][y+1]=tmp;
   x++;
   y++;
   tmp++;
  }
  if(y==n)
    y=1;
  if(x==n)
    x=1;
  while(tab[x][y]!=0&&(x!=n-1||y!=n-1))
  {
   tab[x][y]=tmp;
   x--;
   tmp++;
  }
  if(y==n)
  y=1;
  if(x==n)
    x=1;
 }
}*/
/**fonction de verification de la magicité du carré(reussi)*/
int verftab(int n,int tab[50][50])
{
 int i,j,soml,somc,somdg,somdd;
 for(i=0,soml=0;i<=n-1;i++)
 {
  for(j=0;j<=n-1;j++)
    soml+=tab[i][j];
 }
 for(i=0,somc=0;i<=n-1;i++)
 {
  for(j=0;j<=n-1;j++)
  somc+=tab[j][i];
 }
 for(i=0,somdg=0;i<=n-1;i++)
 {
  for(j=i;j<=n-1;i++)
    somdg+=tab[i][j];
 }
 for(i=0,somdd=0;i<=n-1;i++)
 {
  for(j=n-1;j=0;j--)
   somdd+=tab[i][j];
 }
 if(soml==somc==somdg==somdd)
    return 1;
 return 0;
}
/**procedure d'affichage temps reel*/
void afftr(int n ,int tab[50][50])
{
 int i,j,k,x,y,tmp;
 x=n-1;
 y=(((n+1)/2)-1)  ;
 tmp=2;
 for(k=0;k<=n;k++)
 {
  while(tab[x+1][y+1]==0&&(x!=n||y!=n))
  {
   tab[x+1][y+1]=tmp;
   x++;
   y++;
   tmp++;
   afftab(n,tab);
  }
  while(tab[x+1][y+1]=!0&&(x!=n||y!=n))
  {
    tab[x-1][y]=tmp;
    x--;
    tmp++;
    afftab(n,tab);
  }
  if(y==n)
   y=1;
  if(x==n)
   x=1;
 }
}
/**programme principal*/
int main()
{
int ord,car[50][50];
printf("entrer l'ordre: ");
scanf("%d",&ord);
init(ord,car);
afftab(ord,car);
remptab(ord,car);
afftab(ord,car);
/*afftr(ord,car);*/
if(verftab==1)
printf("LE CARRE EST MAGIQUE\n");
else
printf("LE CARRE N'EST PAS MAGIQUE");
return 0;

}
