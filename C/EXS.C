#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n;
float x,t,temp,val,sum;
clrscr();
scanf("%f",&x);
scanf("%d",&n);
val=x;
x=x*3.14159/180;
t=x;
sum=x;
for(i=1;i<n;i++)
{
temp=(x*x)/(2*i*(2*i+1));
t=(t*pow((double)(-1),(double)(2*i-1))*temp);
sum=sum+t;
}
printf("\n%f=%8.4f",val,sum);
printf("\n%f=%8.4f",val,sin(x));
getch();
}