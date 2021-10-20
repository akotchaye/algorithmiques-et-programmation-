#include<stdio.h>
#include<math.h>
main()
{
int a,b,c;
double d;
printf("entrer les entiers a b c:");
scanf("%d %d %d",&a,&b,&c);
printf("a= %d  b=%d  c=%d :\n",a,b,c);
if (a==0&&b!=0)
{
printf(" l 'equation est de degre 1!\n");
printf(" la solution est x=%d\n",-c/b);
}
if (a==0&&b==0&&c!=0)
{
printf("l'equation est de degre 0!\n");
printf("l'ensemble solution est vide!\n");
}
if (a==0&&b==0&&c==0)
{
printf("l'ensemble solution est |R\n ");
}
else if (a!=0)
{
d=b*b-4*a*c;
if(d<0)
printf("l'equation n'admet pas de solution reelles\n");
else if(d==0)
{
printf("l'equation admet une solution double :");
printf("X1=X2= %0.2f ",(float)-b/(2*a));
}
else
{
printf("l equation admet deux solutions reelles distinctes :");
printf("X1= %0.2f et X2= %0.2f \n",((-b)-sqrt(d))/(2*a),((-b)+sqrt(d))/(2*a));
}
}
return 0;
}
