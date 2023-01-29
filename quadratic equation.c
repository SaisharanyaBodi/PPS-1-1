#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,d;
float r1,r2;
printf("/n enter a,b,c values");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
if(d>0)
{
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("\n eoots are real=%f",r1,r2);
}
else
{
if(d==0)
{
r1=r2=-b/(2*a);
printf("\n roots are equal=%f",r1,r2);
}
else
{
printf("\n roots are imaginary");
}
}
}