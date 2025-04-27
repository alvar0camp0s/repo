#include <iostream>

using namespace std;

class students{
public:

    string name;
    int age;
    double grade;

        students(){
            name ="Por Asignar";
            age =0;
            grade =0;
        }
    students(string name_student,int age_student, double grade_student){
       
        name = name_student;
        age = age_student;
        grade = grade_student;

    }

};

int main(){

    students student1("Juan",25,7.2);


    students student2("Pablo",24,6.1);

    
    students student3;
    
    cout << student3.name<<endl;
    cout << student3.age<<endl;
    cout << student3.grade<<endl;

    
    return 0;
} 