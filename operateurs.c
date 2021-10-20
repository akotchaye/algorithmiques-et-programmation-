#include<stdio.h>
int main()
{
int a=20,b=5,c=-10,d=2,x=12,y=15;
printf("1=%d\n",(5*x)+2*((3*b)+4));
printf("2=%d\n",(5*(x+2)*3)*(b+4));
printf("3=%d\n",a==(b=5));
printf("4=%d\n",a+=(x+5));
printf("5=%d\n",a!=(c*=(-d)));
printf("6=%d\n",a*=c+(x-d));
printf("7=%d\n",a%=d++);
printf("8=%d\n",a%=++d);
printf("9=%d\n",(x++)*(a+c));
printf("10=%d\n",a=x*(b<c)+y*!(b<c));
printf("11=%d\n",!(x-d+c)||d);
printf("12=%d\n",a&&b||!0&&c&&!d);
printf("13=%d\n",((a&&b)||(!0&&c))&&!d);
printf("14=%d\n",((a&&3)||!0)&&(c&&(!d)));
return 0;
}
