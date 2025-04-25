#include <iostream>

using namespace std;

class Students{
public:

    string name;
    int age;
    double grade;

        Students(){
            name ="Por Asignar";
            age =0;
            grade =0;
        }
    Students(string name_Student,int age_Student, double grade_Student){
       
        name = name_Student;
        age = age_Student;
        grade = grade_Student;
    }
        bool aprobado(){
            if (grade>=5.0){
              return true;  
            } else {
                return false;
            }
        }

    };

int main(){

    Students Student1("Juan",25,7.2);


    Students Student2("Pablo",24,4.1);

    
    Students Student3;
    
    cout << Student3.name<<endl;
    cout << Student3.age<<endl;
    cout << Student3.grade<<endl;

    cout << Student1.aprobado()<<endl;
    cout << Student2.aprobado()<<endl;
    cout << Student3.aprobado()<<endl;
    
    return 0;
} 