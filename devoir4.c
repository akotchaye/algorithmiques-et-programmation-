#include<stdio.h>
int main()
{
double r1,r2,r3,req;
printf("entrer r1 : ");
scanf("%lf",&r1);
printf("entrer r2 : ");
scanf("%lf",&r2);
printf("entrer r3 : ");
scanf("%lf",&r3);
printf("resistance equivalente serie :\n");
printf("req= %lf\n",r1+r2+r3);
req=r1*r2+r1*r3+r2*r3;
req=r1*r2*r3/req;
printf("resistance equivalente en parallele :\n");
printf("req= %lf",req);
return 0;
}

