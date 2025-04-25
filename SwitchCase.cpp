#include <iostream>

using namespace std;

int main(){
    double num1=5.0;
    double num2= 7.0;

    char operation = '+';

    switch (operation )
    {
    case '+':
        cout << num1<<"+"<< num2 << "=" << num1+num2 << endl;
        break;
    case '-':
        cout << num1<<"-"<< num2 << "=" << num1-num2 << endl;
        break;
    case 'x':
        cout << num1<<"x"<< num2 << "=" << num1*num2 << endl;
        break;
    case '/':
        cout << num1<<"/"<< num2 << "=" << num1/num2 << endl;
        break;
    default:
     cout << "You cannot do that" << endl;
     break;

    }
    return 0;
}