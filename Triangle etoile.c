#include<stdio.h>
int main()
{
int i,j,nbr;
printf("entrer le nombre de lignes  : ");
scanf("%d",&nbr);
for(i=1;i<=nbr;i++)
{
    for(j=1;j<=i;j++)
    printf("*");
    printf("\n");
}
return 0;
}
