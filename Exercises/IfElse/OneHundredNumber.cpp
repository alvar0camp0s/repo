#include <iostream>

using namespace std;

int main(){

    int number1;
    int number2;

    cout<<"Insert the first number: "<<endl;
    cin>>number1;
    cout<<"Insert the second number: "<<endl;
    cin>>number2;

    if(number1>number2){

        cout<<"The number "<<number1<<" is near to 100"<<endl;
    } else if(number1>number2){

        cout<<"The number "<<number2<<" is near to 100"<<endl;
    }


    return 0;
}