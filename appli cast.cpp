#include <stdio.h> 
#include <conio.h> 
int main() 
{/* 
int i=0x1234,j;

char d,e; 
float r=89.67,s;

j = (int)r; 
s = (float)i; 
d = (char)i; 
e = (char)r; 
printf("Conversion float en int: %5.2f vaut %d\n",r,j);
 
printf("Conversion int en float: %d vaut %5.2f\n",i,s);
 
printf("Conversion int en char: %x vaut %c\n",i,d);
 
printf("Conversion float en char: %5.2f vaut %c\n",r,e);
************************************************
char nbr;
int lettre;
printf("entrer un caractere\n");
scanf("%c",&nbr);
printf("le code ASCII est: %d\n",nbr);
printf("entrer un nombre\n");
scanf("%d",&lettre);
printf("la conversion en caractere donne: %c\n",lettre);
**************************************************/
char c1, c2; 
printf("Entrer un caractère: "); 
scanf("%c", &c1); 
printf("Voici son code ASCII en décimal: %d\n",c1);
printf("Entrer un autre caractère: "); 
fflush(stdin);
scanf("%c", &c2); 
printf("Voici son code ASCII en décmal: %d\n",  c2);
printf("Pour continuer frapper une touche "); 

}
 
