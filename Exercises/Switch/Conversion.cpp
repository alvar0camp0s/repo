#include<iostream>

using namespace std;

int main(){

    float dolar;
    float euro=0.88;
    float yen=142.13;
    float libra=0.75;
    float resultado;
    int opcion;

    cout <<"    **Bienvenido**      "<<endl;
    cout<<"1: Dolar a Euro"<<endl;
    cout<<"2: Dolar a Yen"<<endl;
    cout<<"3: Dolar a Libra"<<endl;
    cin>>opcion;

    cout<<"Ingresa la cantidad de USD que quieres convertir: "<<endl;
    cin>>dolar;

    switch (opcion)
    {
        case 1:

        resultado=dolar*euro;
        cout<<dolar<< " a EUR: "<<resultado;
        
        break;
        case 2:
        
        resultado=dolar*yen;
        cout<<dolar<< " a YJP: "<<resultado;
        
        break;
        case 3:
        
        resultado=dolar*libra;
        cout<<dolar<< " a GBP: "<<resultado;
        
        break;
    
    default:
        cout <<"Por favor, ingrese una opcion entre 1,2,3."<<endl;
        break;
    }



    return 0;

}