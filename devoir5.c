#include<stdio.h>
int main()
{
    int a,b;
    printf("entrer un entier a: ");
    scanf("%d",&a);
    printf("entrer un entier b: ");
    scanf("%d",&b);
    if(a<0&&b<0||a>0&&b>0)
    printf("le signe du produit est positif");
    else if(a==0||b==0)
    printf("le produit est nul");
    else
    printf("le signe du produit est negatif");
    return 0;
}
