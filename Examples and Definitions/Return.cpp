#include <iostream>

using namespace std;

double average(double num1,double num2){
    double answer;
    answer = (num1+num2)/2;
    //If I put cout << "Hello" << endl; here it will always be displayed
    return answer;
//If I put cout << "Hello" << endl; here it will NOT be displayed
}
int main(){

    double number1 = 7.2;
    double number2= 5.2;
    double answer=average(number1,number2);
    cout << answer << endl;

    return 0;
}