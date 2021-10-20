#include<stdio.h>
int main()
{
char tab[50];
int i=0;
printf("entrer une chaine de caractere :");
gets(tab);
//while(tab[i]!='\0')
//i++;
for(i=0;tab[i]!='\0';i++)
    ;
//for(i=0;tab[i];i++)
//;
printf("le nombre de caractere est = %d",i);
return 0;
}
