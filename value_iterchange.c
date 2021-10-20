#include<stdio.h>
 main()
 {
 int a,b,c,tmp;
 printf("entrer les entiers a b c :\n");
 scanf("%d %d %d",&a,&b,&c);
 tmp=a;
 if(a<b)
 {
tmp=a;
  a=b;
  b=tmp;
 }
 if(a<c)
 {
 tmp=a;
 a=c;
 c=tmp;
 }
 if(b<c)
 {
tmp=b;
b=c;
c=tmp;
 }
 printf("les nouvelles valeurs sont: ");
 printf("a=%d b=%d c=%d",a,b,c);
 return 0;
}
