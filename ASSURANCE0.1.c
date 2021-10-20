#include<stdio.h>
#include<conio.h>
# define B 1000000 /*definition de la constante B=1000000*/
 main()
{						/*definition des variables*/
int n, risq,util,pui;
float prim;
    do 					/*boucle de controle de saisie*/
	{
	printf ("entrer type de risque\n");
	printf("1- tierce collision\n");
	printf("2-tout risque\n");
	printf("entrer votre choix!\n");
	scanf("%d",&risq);
	}
	while((risq!=1)&&(risq!=2));
	if(risq==1)						/*calcul de la prime*/
	 prim=B;
		else
		{ prim=B*1.5;
		}
		do							/*boucle de controle de saisie*/	
		{
	printf("entrer le type de  puissance\n");
	scanf("%d",&pui);
		}	
	while((pui<=1));
	if(pui>=9)
	 prim=prim*1.4;				/*calcul de la prime*/
	 else if(pui<6)
	 		prim=prim*1;
			else
			{ prim=prim*1.2;
			}
			do						/*boucle de controle de saisie*/
			{
 			 printf("entrer le type d utilisation\n");
 			 printf("1- promenade\n");
 			 printf("2- trajet\n");
 			 printf("3- affaire\n");
 			 scanf("%d",&util);
			  }
 			 while((util!=1)&&(util!=2)&&(util!=3));
  if(util==1)
  		 prim=prim*0.90;					/*calcul de la prime*/
	else if(util==2)
	 prim=prim*1.10;
			else
			{ prim=prim*1.25;
	}

  printf("le montant de la prime est %f\n",prim);		/*affichage du montant de la prime*/
  return 0;
}

