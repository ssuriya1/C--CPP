#include <iostream.h>
#include <conio.h>
void main() { 
    clrscr();
    int x[50], n, odd = 0, even = 0;
    cout<<"\n Enter the number of values";
    cin>>n;
    for (int i = 0; i < n; i++) { 
        cout<<"\n Enter the value of x [ " << i+1 << "] .... ";
        cin>>n;
        if (x[i] % 2 == 0) { 
            ++ even;
        else
            ++ odd;
    }
    cout<<"\n There are " << odd << " odd umber in the given array";
    cout<<"\n There are " << even << " even umber in the given array";
    getch();
}