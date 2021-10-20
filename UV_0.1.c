#include <stdio.h>
#include<conio.h>
main()
{
float Dev,exam,note; 	/*declaration des variables*/

int i,n,m,cpt ;

 cpt=0;						/*initalisation du compteur*/
 
  for( m=0;m<2;m++) 			/*gronde boucle repetitive*/
  {
   printf("entrer le nombre de matiere contenu dans l'uv %d\n",m+1);	/*saisie des notes de devoir et d'examens*/
   
   scanf("%d",&n);
   
	 for(i=0;i<n;i++)
	 {
	  printf("entrer la note de devoir\n");
	  
	  scanf("%f",&Dev);
	  
	  Dev*=0.4;

	  printf(" entrer la note d'examen\n");
	  
	  scanf("%f",&exam);
	  
	  exam*=0.6;
	  
	  note=(exam+Dev);
	  
	  if(note<=7)	/*condition et incrementation du compteur*/
	  
	  cpt=cpt+1;
    }
  }
		if(cpt>=1)		/*condition et affichage de la decision*/
		
		   printf("ECHOUE\n");
		   
		   else
		   
		   printf( "ADMIS\n");
		   
		   
		 return 0;
		
	}/*fin du programme*/
			 
