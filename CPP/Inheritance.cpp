#include <iostream.h>
#include <conio.h>
class add { 
    int sum;
    protected: int num1, num2;
    public:
        add() { 
            num1 = num2 = sum =  0;
            cout<<"\n Add Constructor...";
        }
        void accept() {
            cout<<"\n Enter two numbers...";
            cin>>num1>>num2;
        }
        void plus() { 
            sum = num1 + num2;
            cout<<"\n The sum of " << num1 << " and " << num2 << " is " << sum;
        }
}
class subtract : public add {
    int sub; 
    public: 
        subtract() {
            cout<<"\n Subtract Constructor ...";
        }
        void minus() { 
            add::accept();
            sub = num1 - num2;
            cout<<"\n THe Difference of " << num1 << " and " << num2 << " is " sub;
        }
}
void main() {
    subtract s;
    int ch = 0;
    clrscr();
    cout<<"n1. Add \n2. Subtract \n";
    cout<<"\n Enter your choice... ";
    cin>>ch;
    switch(ch) {
        case 1: 
            s.accept();
            s.plus();
            break;
        case 2:
            s.minus();
            break;
    }
    getch();
}