#include<stdio.h>
int main()
{
int quo,div,dis,res;
printf("entrer dividende: ");
scanf("%d",&div);
printf("entrer diviseur: ");
scanf("%d",&dis);
if (div<dis)
printf("le reste est %d :",div);
if (dis==0)
printf("impossible dans |R");
else
res=div-dis;
quo=1;
while(res>dis)
{
res=res-dis;
quo=quo+1;
}
printf("le quotient est %d et le reste est %d ",quo,res);
return 0;

}
