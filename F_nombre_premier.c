#include<stdio.h>
#include<math.h>
int premier(int n);
int main()
{
int nbr,rep;
printf("enter un nombre: ");
scanf("%d",&nbr);
rep=premier(nbr);
printf("%d",rep);
if(rep==1)
printf("le nombre est premier");
else
printf("le nombre n'est pas premier");
return 0;
}


int premier(int n)
{
//for(i=1;n%i!=0,i<sqrt(n);i++)
int i=2;
while((n%i!=0)&&(i<sqrt(n)))
          i++;
      return 1;
}
