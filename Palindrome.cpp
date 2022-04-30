#include <iostream.h>
#include <conio.h>
#include <string.h>
void main() {
    clrscr();
    char str[50], rstr[50], ch;
    int i, k;
    cout<<"\n Enter the string ...";
    cin>>str1;
    strcpy(rstr, str1);
    k = strlen(str1);
    for ( i = 0; i < k; i++) {
        ch = rstr[i];
        rstr[i] = rstr[k-i-1];
        rstr[k-i-1] = ch;
    }
    cout<"\n"<<"Reversed String is"<<rstr;
    if (strcmp(str1, rstr)) {
        cout<<"\n" << str1 << "is not a palindrome";
    } else {
        cout<<"\n" << str1 << "is a palindrome";
    }
    getch();
}