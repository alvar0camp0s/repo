#include <iostream>

using namespace std;

class Students{
public:

    string name;
    int age;
    double grade;

};

int main(){

    Students student1;
    student1.name ="Juan";
    student1.age=25;
    student1.grade=7.2;

    Students student2;
    student2.name ="Pablo";
    student2.age=24;
    student2.grade=6.1;
    
    student2.age=25;
    cout << student1.name<<endl;

    return 0;
}