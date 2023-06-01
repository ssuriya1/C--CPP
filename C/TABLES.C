#include<stdio.h>
#include<conio.h>
void main()
{
int a,i;
clrscr();
printf("enter the number to print the table ");
scanf("%d",&a);
for(i=1;i<=20;i++)
printf("%d*%d=%d\n",a,i,(a*i));
getch();
}