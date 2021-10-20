#include<stdio.h>
main()
{
int a,b,choix;
printf("entrer les entiers a b : ");
scanf("%d %d",&a,&b);
printf("1-addition\n");
printf("2-soustraction\n");
printf("3-multiplication\n");
printf("4-division\n");
printf("0-termine\n");
printf("entrer choix\n");
scanf("%d",&choix);
/*if(b==0&&choix==4)
printf("denominateur nul\n");*/
switch(choix)
{
case 1:printf("a+b=%d\n",a+b);
break;
case 2:printf("a-b=%d\n",a-b);
break;
case 3:printf("a*b=%d\n",a*b);
break;
case 4:
if(b!=0)
printf("a/b=%f\n",(float)a/b);
else
printf("denominateur nul\n");
break;
case 0:printf("fin du programme\n");
break;
default:printf("merci d'avoir essaye!!!\n");
}
return 0;
}
