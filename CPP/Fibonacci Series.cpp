#include <iostream.h>
#include <conio.h>
void main() { 
    int x1 = 1, x2 = 1, x3, n;
    clrscr();
    cout<<"\nEnter the number of terms : ";
    cin>>n;
    for (int i = 0; i <n; i++) { 
        x3 = x1 + x2;
        cout<<"\n"<<x3;
        x1 = x2;
        x2 = x3;
    }
    getch();
}