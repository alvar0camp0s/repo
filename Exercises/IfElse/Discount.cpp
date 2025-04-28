#include <iostream>

using namespace std;

int main (){

float price;
float discount;

cout<<"How much is your purchase amount?"<<endl;
cin>>price;

    if(price>100){

    cout<<"You have a discount on your purchase of: "<<price<<endl;
    discount=price*0.10;
    cout<<"Your new price is"<<price-discount<<endl;

    } else {

        cout<<"Sorry, you do not qualify for the discount."<<endl;

    }

    return 0;

}