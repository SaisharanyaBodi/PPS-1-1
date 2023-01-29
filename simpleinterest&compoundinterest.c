#include<stdio.h>
#include<math.h>
void main ()
{
int p,t,r,simpleinterest,compoundinterest;
printf("enter the p amount");
scanf("%d",&p);
printf("enter the t periods");
scanf("%d",&t);
printf("enter the r");
scanf("%d",&r);
simpleinterest = (p*t*r)/100;
printf("the simpleinterest is %d\n",simpleinterest);
compoundinterest = p*(pow(1+r/100,t));
printf("the compoundinterest is %d\n",compoundinterest);
return;
}    