#include<stdio.h>
double factoriel(int n);
int main()
{
int nbr;
printf("entrer un nombre: ");
scanf("%d",&nbr);
printf("le factoriel est: %lf",factoriel(nbr));
return 0;
}
double factoriel(int n)
{
int b;
int i;
for(i=2,b=1;i<=n;i++)
b*=i;
return b;
}
