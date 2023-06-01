#include <iostream.h>
#include <conio.h>
void main() { 
    int a [n][n], b[n][n], c[n][n];
    int i, j, n;
    clrscr();
    cout<<"Enter the number of rows and columns";
    cin>>n;
    for ( i = 0; i < n; i++) {
        for (j = 0; j < n; i++) {
            cout<<"\n Enter the value of A [ " << i + 1; << " ] [ " << j + 1 << " ]";
            cin>>a[i][j];
        }
    }
    cout<<"\n RESULTANT MATRIX \n\n";
    for ( i= 0; i < n; i++) { 
        for ( j= 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << "\t";
        }
        cout<<"\n";
    }
    getch();
}