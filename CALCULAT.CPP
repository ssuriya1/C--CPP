#include<iostream.h>
#include<conio.h>
void main()
{
int n;
float a,b,c;
clrscr();
cout<<"\n\t\t\tCALCULATOR";
cout<<"\n\t\t\t**********";
cout<<"\n1.addition\n2.subtraction\n3.multiplication\n4.division\nselect your choice:";
cin>>n;
switch(n)
{
case 1:cout<<"\nenter the two numbers:\n";
cin>>a>>b;
c=a+b;
cout<<"\nthe sum of two numbers is "<<c;
break;
case 2:cout<<"\nneter the two numbers:\n";
cin>>a>>b;
c=a-b;
cout<<"\nthe difference between the two numbers is "<<c;
break;
case 3:cout<<"\nenter the two numbers:\n";
cin>>a>>b;
c=a*b;
cout<<"\nthe multiplication of two numbers is "<<c;
break;
case 4:cout<<"\nenter the two numbers:\n";
cin>>a>>b;
c=a/b;
cout<<"\nthe division of the two numbers is "<<c;
break;
}
getch();
}