#include<stdio.h>
#include<conio.h>
/*declaration des constantes*/
#define d 0.04
#define b 0.0005
#define u=0.1
#define v=0.2
#define M=24/*24 mois de simmulation*/
/*declaration du tableau et des variables*/
int main{

TAB(1:M):tableau de reels
var Vx,Vy,X,Y :reel
    m,i  :entier
	Debut
	/*Saisie des valeurs et affectation du nombre de proie du premier mois dans la premiere colonne du tableau*/
		afficher"entrer le nombre de proie"
		saisir X
		TAB(1)=X
		afficher"entrer le nombre de predateurs"
		saisir Y
		afficher "entrer le nombre de mois de la simulation"
		saisir m
		/*calcul des taux de variations Vx et Vy*/
		Vx=d-b*Y
		Vy=u*b*X-v
		/*calcul et affectation dans le tableau des variation du nombre de proie*/
	    pour (i=2 a m)
		 X=X+Vx*X
		 Y=y+Vy*Y/*négligeable*/
		 TAB(i)=X
		Fpour
		 /*affichage du tableau*/
		 pour (i=1 a m)
		  afficher TAB(i)
		 Fpour

}
