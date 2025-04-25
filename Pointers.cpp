#include <iostream>

using namespace std;

int main(){

    int integer = 5;
    int *pinteger = &integer;
    double decimal=4.1;
    double *pdecimal= &decimal;
    char letter ='a';
    char *pletter = &letter;

    cout << pinteger << endl;
    cout << pdecimal << endl;
    cout << pletter << endl;

/* To only get the value of the pointers, we just add a * before the pointer:    
    
    cout << *pinteger << endl;
    cout << *pdecimal << endl;
    cout << *pletter << endl;

    */
    return 0;
}   