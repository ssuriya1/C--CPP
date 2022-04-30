#include <iostream.h>
#include <conio.h>
long int fact(int x) {
    long int f = 1, i;
    for (int i = 0; i <= x; i++) { 
        f *= i;
        return f;
    }
    void main() {
        int n;
        clrscr();
        cout<<"\nEnter the number ... ";
        cin>>n;
        cout<<"\n The Factorial of " << n << " is " << fact(n);
        getch();
    }
}