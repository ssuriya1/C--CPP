#include<stdio.h>
#include<conio.h>
void main()
{
int a[5][5],r,c,i,j;
clrscr();
printf("\nEnter the no of rows and columns\n");
scanf("%d%d",&r,&c);
printf("\nEnter the matrix:\n");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
getch();
}