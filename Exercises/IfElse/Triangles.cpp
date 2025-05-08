#include <iostream>

using namespace std;

int main(){

        float side1;
        bool sideEqueal1;
        float side2;
        bool sideEqueal1;
        float side3;
        bool sideEqueal1;
          
    cout<<"Write the first side"<<endl; 
    cin>>side1;
    cout<<"Write the second side"<<endl;
    cin>>side2;
    cout<<"Write the third side"<<endl;
    cin>>side3;

    if (side1==side2==side3){

        cout<<"You have a isosceles triangle"<<endl;

    } else if(side1 !=  side2!= side3){

        cout<<"You have a scalene triangle"<<endl;

    } else if (side1==side2!=side3)
    cout<<"You have a equilateral triangle"<<endl;

    return 0;
}