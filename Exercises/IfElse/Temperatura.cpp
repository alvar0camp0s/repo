#include <iostream>

using namespace std;

int main(){

    int temp;

    cout<<"Enter the temperature in degrees Celsius"<<endl;
    cin>>temp;

    if (temp<15){

        cout<<"Today is cold"<<endl;

    } else if (temp>= 15 && temp<=25){

        cout<<"Today the temperature is mild"<<endl;

    } else if (temp>25){

        cout<<"Today the temperature is warm"<<endl;

    }

    return 0;

}