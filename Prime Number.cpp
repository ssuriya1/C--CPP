#include <iostream.h>
#include<conio.h>
void prime(int x) {
    for (int i =2; i<= x/2; i++) {
        if (x%i == 0) 
            cout<< x << "IS NOT A PRIME NUMBER";
        else
            cout<< x << "IS A PRIME NUMBER";
    }
    return;
}
void main() {
    int n;
    clrscr();
    cout<<"\n Enter the number .... ";
    cin>>n;
    prime(n);
    getch();
}