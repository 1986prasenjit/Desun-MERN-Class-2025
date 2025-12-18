// ** Write a C++ Program to Implement a Class for Student Details Create a Student class with attributes: name, age, course. Implement a constructor and a function to display student details.

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string course;
public:
    // Constructor
    Student(string studentName, int studentAge, string studentCourse) {
        name = studentName;
        age = studentAge;
        course = studentCourse;
    }

    // Function to display student details
    void displayDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
        cout << "Student Course: " << course << endl;
    }
};

int main() {
    // Creating an object of Student class
    Student student1("Alice", 20, "Computer Science");

    // Displaying student details
    student1.displayDetails();

    return 0;
}