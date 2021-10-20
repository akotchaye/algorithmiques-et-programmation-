#include<stdio.h>
int main()
{

int i,somme,n=1;
printf("entrer un nombre\n");
scanf("%d",&somme);
for(i=1;i<=somme;i++)
n*=i;
/*printf("n=%d",i);*/
printf("n=%d",n);
return 0;
}
