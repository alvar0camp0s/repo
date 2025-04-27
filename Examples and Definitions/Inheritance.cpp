#include <iostream>

using namespace std;
class animal {
    public:
    void eat(){
        cout << "The animal eats"<<endl;
    }
    void sleep(){
        cout << "The animal slepps"<<endl;
    }
};

class dog: public animal {
public: 
    void bark(){
        cout<< "The dogs barks"<<endl;
    }
    void eat(){
        cout << "The dog eats"<<endl;
    }
};

int main(){

    dog dog1;
    dog1.eat();
    dog1.bark();
    return 0;
}