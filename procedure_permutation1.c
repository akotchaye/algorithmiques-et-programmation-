#include<stdio.h>
void permute(int *a,int *b);
int main()
{
int x,y;
printf("entrer deux valeurs x et y :");
scanf("%d %d",&x,&y);
permute(x,y);                                         //sans pointeur ca ne marche pas. car les addresses sont perdus!!!
printf("les nouvelles valeurs sont:x= %d y=%d",x,y);
return 0;
}
void permute(int *a,int *b)
{
int tmp;
tmp= *a;
*a = *b;
*b = tmp;
}
