#include<iostream.h>
#include<conio.h>
void main()
{
int a,i;
clrscr();
cout<<"\nEnter the table value";
cin>>a;
for(i=1;i<13;i++)
cout<<a<<"*"<<i<<"="<<(a*i)<<"\n";
getch();
}