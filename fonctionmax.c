#include<stdio.h>
int max(int x,int y);
int main()
{
int a,b;
printf("entrer deux entiers :");
scanf("%d %d",&a,&b);
printf("maximum : %d ",max(a,b));
return 0;
}
int max(int x,int y)
{
if(x>y)
    return x;
return y;
}
