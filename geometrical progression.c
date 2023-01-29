#include<stdio.h>
#include<math.h>
void main()
{
int x,i,n;
float sum;
printf("enter n value\n");
scanf("%d",&n);
printf("enter x value which is highest power of the series\n");
scanf("%d",&x);
for(i=1;i<=n;i++)
{
sum=sum+pow(x,i);
}
printf("geometrical progression sum is %f",sum);
return;
}