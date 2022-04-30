#include<iostream.h>
#include<conio.h>
void main()
{
int i,j,arr[3][3];
clrscr();
cout<<"enter the numers:";
for(i=0;i<=2;i++){
for(j=0;j<=2;j++){
cin>>arr[i][j];
}
}
for(i=0;i<=2;i++){
for(j=0;j<=2;j++){
cout<<"\t"<<arr[i][j];
}
cout<<"\n";
}
}