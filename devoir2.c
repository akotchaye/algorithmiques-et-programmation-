#include<stdio.h>
int main()
{
 int A,B,C,tmp;
 printf("entrer un entier A: ");
 scanf("%d",&A);
 printf("A= %d\n",A);
 printf("entrer un entier B: ");
 scanf("%d",&B);
 printf("B= %d\n",B);
 printf("entrer un entier C: ");
 scanf("%d",&C);
 printf("C= %d\n",C);
 printf("nouvelles valeurs\n");
 tmp=A;
 A=C;
 C=B;
 B=tmp;
 printf("A=%d B=%d C=%d",A,B,C);
 return 0;

}
