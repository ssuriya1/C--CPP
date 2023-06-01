#include<iostream.h>
#include<conio.h>
void main()
{
int a;
clrscr();
cin>>a;
for(int i=0;i<4;i++)
{
for(int j=i;j<4;j++)
{
cout<<a<<'\t';
}
cout<<'\n';
a-=2;
}
getch();
}