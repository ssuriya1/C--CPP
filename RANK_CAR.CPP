#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c,d,e,t;
float avg;
char r[15];
clrscr();
cout<<"\t\t\tRank Card";
cout<<"\n\t\t\t*********";
cout<<"\nenter the marks of 5 subjects:\n\nEnglish=";
cin>>a;
cout<<"Tamil=";
cin>>b;
cout<<"Maths=";
cin>>c;
cout<<"science=";
cin>>d;
cout<<"social=";
cin>>e;
t=a+b+c+d+e;
cout<<"\n\nthe sum of the 5 subjects="<<t;
avg=t/5;
cout<<"\n\nThe Average="<<avg;
cout<<"\n\nRank=";
if(avg>79)
{
cout<<"distinction";
}
else if(avg>69)
{
cout<<"first class";
}
else if(avg>59)
{
cout<<"second class";
}
else if(avg>39)
{
cout<<"third class";
}
else
{
cout<<"fail";
}
getch();
}