#include<iostream>

using namespace std;

int main(){

    /*Vi la solución de la sucesión de Fibonacci, dado a que no pude, sin embargo,
     bajo la misma lógica hice la sucesión de Tribonacci*/

    int j=0;
    double a=0;
    double b=1;
    double c=1;
    double d=0;

    //Limite para Tribonacci
    cout<<"Escriba la cantidad de digitos que desea en función de tribonacci: "<<endl;
    cin>>j;

    for (int i = 0; i < j; i++)
    {
        d=a+b+c;
        a=b;
        b=c;
        c=d;

        cout<<i<<" : "<<c<<endl;

        
    }
    

    return 0;

}