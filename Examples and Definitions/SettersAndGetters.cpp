#include <iostream>

using namespace std;

class Students{
private:
string grade;
public:
    string name;
    int edad;
    double qualification;

    Students(string name_Student, string grade_Student, int edad_Student, double qualification_Student){
       
        name = name_Student;
        definir_grade(grade_Student);
        edad = edad_Student;
        qualification = qualification_Student;
    }
void definir_grade(string grade_Student){
    if(grade_Student=="Architecture" || grade_Student=="General Medicine" || grade_Student=="Software Development"){
        grade=grade_Student;
    } else {
        grade="grade Incorrecto";
    }

}
string get_grade(){
    return grade;}

    };

int main(){

    Students Student1("Juan","Perez",25,7.2);
    Student1.definir_grade("Architecture");
    Students Student2("Pablo","General Medicine",24,4.1);
    Students Student3("Pedro","Software Development",23,8.2);
  

    cout << Student1.get_grade()<<endl;
    cout << Student2.get_grade()<<endl;
    cout << Student3.get_grade()<<endl;
    
    return 0;
} 