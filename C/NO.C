#include<stdio.h>
#include<conio.h>
void main()
{
int a[5][5],r,c,i,j;
clrscr();
printf("\n Enter the row and column matrix:");
scanf("%d%d",&r,&c);
printf("\n Enter the value of matrix:");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("%d\t",a[i][j]);
printf("\n\n");
}
getch();
}
