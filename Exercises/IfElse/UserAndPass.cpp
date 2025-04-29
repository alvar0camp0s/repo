#include<iostream>

using namespace std;

int main (){

    /* I was trying to do this only with "cin", but in this case we use getline()*/
        string userName="Alvaro Campos";
        string passUser="Alvaro 12345";
        string askUser;
        string askPass;

        //To get a string we use the fuction "getline(cin,variable)"
        cout << "Username: ";
        getline(cin,askUser); 
        
        if(userName == askUser){

            cout<<"Your username is correct"<<endl;

        } else{

            cout<<"Your username is incorrect"<<endl;

        }


        // We use again the function getline()
        cout << "Password: ";
        getline(cin,askPass); 
        if(passUser==askPass){

            cout<<"Your password is correct"<<endl;

        } else {

            cout<<"Your password is incorrect"<<endl;

        }
    return 0;

}