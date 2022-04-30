#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,roll[20];
clrscr();
printf("\n Enter the no. of students roll:");
scanf("%d",&j);
for(i=1;i<=j;i++)
{
printf("\n Enter the student roll:");
scanf("%d",&roll[i]);
}
for(i=1;i<=j;i++)
{
printf("\n View the student roll=%d",roll[i]);
}
getch();
}

