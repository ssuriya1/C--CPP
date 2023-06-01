#include<iostream.h>
#include<conio.h>
#define size 5
class stack
{
private:
int st[size],top;
public:
stack()
{
top=0;
}
void push();
void pop();
void display();
};
void stack::push()
{
if(top==size)
{
cout<<"\nstack overflow ";
}
else
{
int data;
cout<<"\enter the data ";
cin>>data;
st[top]=data;
top=top++;
}
}
void stack::pop()
{
if(top==0)
{
cout<<"\n stack is empty ";
}
else
{
top=top--;
cout<<"\n stack data in"<<[top]<<"is"<<st[top];
}
}
void stack::display()
{
if(top==0)
{
cout<<"\nstack is empty ";
}
else
{
for(int i=top-1;i>=0;i--)
{
cout<<st[i]<<"\n;
}
}
}
void main()
{
clrscr();
stack s;
int ch;
do
{
cout<<"\nstack using array ";
cout<<"\n1.push\n2.pop\n3.show\n4.exit ";
cout<<"\nenter your choice ";
cin>>ch;
switch(ch)
{
case 1:s.push();break;
case 2:s.pop();break;
case 3:s.show();break;
case 4:break;
default:cout<<"\nenter your choice between 1-4";
}
}
while(ch!=4);
getch();
}