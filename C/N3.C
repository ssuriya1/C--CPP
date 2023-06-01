#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char name[50][20];
clrscr();
printf("\n Enter the no. of students:");
scanf("%s",&j);
for(i=1;i<=j;i++)
{
printf("\n Enter the student name:");
scanf("%s",name[i]);
}
for(i=1;i<=j;i++)
{
printf("\n View the students name=%s",name[i]);
}
getch();
}

