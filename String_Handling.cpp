#include <iostream>
using namespace std;


int main(){

    string name = "Juan Gonzalez";
    name[6] = 'a';
    string secondName = name.substr(5, 8);
    
    cout << "My name is " << name << endl;
    cout << "My name with length, which gives the length, is " << name.length() << endl;
    cout << "My name with find is " << name.find("G", 0) << endl;
    // Here we use this to find the second character if it's repeated
    cout << "My name with find searching for the second 'z' " << name.find("z", 10) << endl;
    // This function is used to extract a part of the string
    cout << "My secondName is " << secondName << endl;
    
    return 0;
    
}