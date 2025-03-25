#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary;
public:

    // properties or attributes
    string name;
    string dept;
    string subject;

    // constructor
    Teacher() {
        dept = "Computer Science";
    }

    // parameterized constructor
    Teacher(string name, string dept, string subject, double salary) {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // methods or member functions
    void changeDept(string newDept) {
        dept = newDept;
    }

    // setter - used to set the private values
    void setSalary(double s) {
        salary = s;
    }
    // getter - used to get the private values
    double getSalary() {
        return salary;
    }
};

// inheritance 
class Person {
    string name;
    int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

class Student : public Person {
    // name, age, rollno
};

int main() {
    Teacher t1; // created a object t1 of class Teacher
    t1.name = "S";
    t1.subject = "C++";
    // t1.dept = "Computer Science";
    // t1.setSalary(25000);

    cout << t1.name << endl;
    // cout << t1.getSalary() << endl;
    cout << t1.dept;
}