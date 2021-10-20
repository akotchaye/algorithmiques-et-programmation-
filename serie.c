#include<stdio.h>
int main()
{
int n;
double i,s;
printf("entrer le nombre de terme: ");
scanf("%d",&n);
for(s=0,i=1;i<=n;i++)
s+=(1/i);
printf("la somme des %d termes est: %0.3lf",n,s);
return 0;
}
