#include<conio.h>
#include<stdio.h>
void main()
{
int a[5][5],i,j,r,c,s=0;
clrscr();
printf("\nEnter the number of rows and columns\n");
scanf("%d%d",&r,&c);
printf("\nEnter the matrix\n");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
printf("\nthe matrix is\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
printf("\nTranspose of the matrix is\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("%d\t",a[j][i]);
printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
if(i==j)
s=s+a[i][j];
}
printf("\nThe trace of the matrix is %d\n",s);
getch();
}