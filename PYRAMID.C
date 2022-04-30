#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a;
clrscr();
printf("\nenter the number of rows\n");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
for(j=i;j<a;j++)
{
printf(" ");
}
for(j=1;j<(2*i);j++)
{
printf("%c",'A'+j-1);
}
printf("\n");
}
getch();
}