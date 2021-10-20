#include<stdio.h>
int main()
{
int i,nbr,nbrc;
printf("entrer un  nombre : ");
scanf("%d",&nbr);
printf("combien de nombre consecutif ? : ");
scanf("%d",&nbrc);
printf("les %d entiers consecutifs de %d sont : ",nbrc,nbr);
for (i=1;i<=nbrc;i++)
    printf("%d ",nbr+i);
return 0;
}
