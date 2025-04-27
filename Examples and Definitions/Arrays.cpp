#include <iostream>

using namespace std;

int main(){

    int age[] = {21,22,23,24,25};
        age[2]= 24;
        age[5]= 26;

    
    cout << age[2] << endl;
    cout << age[5] << endl;

    int age2 [10];

    age[0]=27;
    age2[1]=28;

    return 0;
}