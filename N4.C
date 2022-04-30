#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,basic[20],hra[20],da[20],ta[20],pf[20],esi[20],lic[20],gross[20],detection[20],net[20];
clrscr();
printf("\n *****Employment Salary*****");
printf("\n Enter the no. of employees:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n Enter the basic pay:");
scanf("%d",&basic[i]);
hra[i]=basic[i]*0.2;
da[i]=basic[i]*0.2;
ta[i]=basic[i]*0.2;
pf[i]=basic[i]*0.2;
esi[i]=basic[i]*0.2;
lic[i]=basic[i]*0.2;
gross[i]=basic[i]+hra[i]+da[i]+ta[i];
detection[i]=pf[i]+esi[i]+lic[i];
net[i]=gross[i]-detection[i];
}
for(i=1;i<=n;i++)
{
printf("\n hra,\t da,\t ta,\t pf,\t esi,\t lic,,\t gross,\t detection,\t\t net");
printf("\n %d,\t %d,\t %d,\t %d,\t %d,\t %d,\t %d,\t %d,\t %d,\t %d",hra[i],da[i],ta[i],pf[i],esi[i],lic[i],gross[i],detection[i],net[i]);
}
getch();
}
