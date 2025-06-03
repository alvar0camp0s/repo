#include <iostream>

using namespace std;

int main(){

    int kw=0;
    cout<<"Write your consume of electric energy"<<endl;
    cin>>kw;

    if(kw<100){

        cout<<"You need to pay a low tax"<<endl;
    }

    if(kw>=100 && kw<=200){

        cout<<"You need to pay a medium tax"<<endl;
    }

    if(kw>200){

        cout<<"You need to pay a big tax"<<endl;
    }
    return 0;
}