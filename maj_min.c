#include<stdio.h>
int main()
{
char car;

printf("entrer un caractere : ");
scanf("%c",&car);
if(car>='A'&&car<='Z' )/*on est pas oblig� de mettre
les conditions entre paranth�se)*/
    printf("le caractere minuscule est %c :\n",car+('a'-'A'));
else{
    printf("le caractere est minuscule\n");
    printf("le caractere majuscule est %c :\n",'A'+car-'a');
    }
return 0;
}
