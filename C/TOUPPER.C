#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char c;
clrscr();
printf("\nenter the string:");
scanf("%c",&c);
if(islower(c))
{
printf("\nupper case :%c",toupper(c));
}
else
{
printf("\nlower case :%c",tolower(c));
}
getch();
}

