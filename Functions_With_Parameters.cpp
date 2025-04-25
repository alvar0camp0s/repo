#include <iostream>

using namespace std;

void greetin(string name, int age){
    cout << "Hello " << name << ". You are " << age  << "Years old"<< endl;
}

int main(){

    string name="Juan";
    int age = 24;
greetin(name, age);
//greetin("Jose", 40);
//greetin("Eduardo", 70);

    return 0;
}