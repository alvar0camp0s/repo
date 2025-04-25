#include <iostream>

using namespace std;

int main(){
    int number1=5;
    int number2=10;

    if(number1>number2){
     
        cout << "The number " << number1<< " is greater than number "<<number2<<endl;

    } else if(number2>number1){

        cout << "The number " << number2<< " is greater than number "<<number1<<endl;

    } else {
     
        cout << "Both numbers are equals" <<endl;

    }
    
    if (3>1||5>6){
        if(number1>number2){
     
            cout << "True"<<endl;
    
        } else {
            cout << "False" << endl;
        }
    }
    return 0;
}