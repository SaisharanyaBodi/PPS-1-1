#include<stdio.h>
int main()
{
int a,b,c,minimum,maximum;
printf("enter a value");
scanf("%d",&a);
printf("enter b value");
scanf("%d",&b);
printf("enter c value");
scanf("%d",&c);
if(a>b&&a>c)
{
printf("a is maximum\n");
}
else if(b>c)
{
printf("b is maximum \n");
}
else
{
printf("c is maximum\n");
}
if(a<b&&a<c)
{
printf("a is minimum\n");
}
else if(b<c)
{
printf("b is minimum\n");
}
else
{
printf("c is minimum\n");
}

return 0;
}