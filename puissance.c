#include<stdio.h>
int main()
{
int s, x;
int i,n;
printf("entrer le nombre x : ");
scanf("%d",&x);
printf("entrer la puissance n : ");
scanf("%d",&n);
for(i=1,s=1;i<=n;i++)
s*=x;
printf("%d eleve a la puissance %d est: %d\n",x,n,s);
return 0;
}
