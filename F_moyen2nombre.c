#include<stdio.h>
double moyenne(double a, double b);
int main()
{
int x,y;
printf("entrer deux valeurs x et y: ");
scanf("%d %d",&x,&y);
printf("la moyenne est: %0.2lf",moyenne(x,y));
return 0;
}
double moyenne(double a,double b)
{
double som;
double moy;
som=a+b;
moy=(som/2);
return moy;
}

