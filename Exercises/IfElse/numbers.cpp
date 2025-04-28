#include <iostream>

using namespace std;

int main(){

    int firstNumber;
    int secondNumber;

    cout <<"Insert your first: "<<endl;
    cin>>firstNumber;

    cout <<"Insert your first: "<<endl;
    cin>>secondNumber;

    if(firstNumber>secondNumber){

        cout<<"The first number is greater than the second"<<endl;

    } else if(firstNumber<secondNumber){

        cout<<"The second number is greater than the first"<<endl;

    } else if(firstNumber==secondNumber){

        cout<<"The numbers are equal"<<endl;

    } else {

        cout<<"You did not enter a digit"<<endl;

    }

    return 0;
}