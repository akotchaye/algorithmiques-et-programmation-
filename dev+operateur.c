#include<stdio.h>
#include<conio.h>
main()
/**{
int n=10,p=5,q=10,r;
r=n==(p=q);
printf("A: n= %d p= %d q= %d r= %d\n",n,p,q,r);

n=p=q=5;
n+=p+=q;
printf("B: n=%d p=%d q=%d\n",n,p,q);

q=n<p?n++:p++;
printf("C: n=%d p=%d q=%d\n",n,p,q);

q=n>p?n++:p++;
printf("D: n=%d p=%d q=%d\n",n,p,q);
printf("Tapez une touche pour continuer");
getch();

}*/
{
    int i,j,n;
    printf("entrer un entier\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
    for(j=1;j<=i;j++)
    printf("*");
    printf("\n");
    }
    return 0;

}

