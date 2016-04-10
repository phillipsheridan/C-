//
//  Exercise11_13.cpp
//  CSCI2490
//
//  Created by Phil on 2/15/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


class Course {
public:
    Course(const string& courseName, int capacity);
    ~Course();
    string getCourseName() const;
    void addStudent(const string& name);
    void dropStudent(const string& name);
    string* getStudents() const;
    int getNumberOfStudents() const;
    void clear();
    Course(const Course& course);
    
    
private:
    string courseName;
    string* students;
    int numberOfStudents;
    int capacity;
    
    
};

Course::Course(const string& courseName, int capacity) {
    numberOfStudents = 0;
    this->courseName = courseName;
    this->capacity = capacity;
    students = new string[capacity];
}
Course::~Course() {
    delete [] students;
}

string Course::getCourseName() const {
    return courseName;
}

void Course::addStudent(const string& name) {
    if (numberOfStudents == capacity) {
        string* temp = new string[capacity * 2 + 1];
        for (int i = 0; i < numberOfStudents; i++) {
            *(temp + i) = *(students + i);
        }
        delete [] students;
        students = temp;
        students[numberOfStudents] = name;
        numberOfStudents++;
        capacity = capacity * 2 + 1;
        
    } else {
    students[numberOfStudents] = name;
    numberOfStudents++;
    }

}
string* Course::getStudents() const
{
    return students;
}
void Course::dropStudent(const string& name) {
    for (int i = 0; i < numberOfStudents; i++) {
        if (students[i] == name) {
            for (int j = i + 1; j < numberOfStudents; j++) {
                students[i] = students[j];
                i++;
            }
            numberOfStudents--;
            break;
            
            
        }
    }
}

int Course::getNumberOfStudents() const {
    return numberOfStudents;
}
void Course::clear() {
    for (int  i = 0; i < numberOfStudents; i++) {
        students[i] = "";
        
    }
    numberOfStudents = 0;
    
}

Course::Course(const Course& course) {
    this->courseName = course.courseName;
    this->numberOfStudents = course.numberOfStudents;
    this->capacity = course.capacity;
    this->students = new string[capacity];
    for (int i = 0; i < numberOfStudents; i++) {
        this->students[i] = course.students[i];
    }
}

int main()
{
    Course course1("Data Structures", 10);
    Course course2("Database Systems", 2);
    
    course1.addStudent("Peter Jones");
    course1.addStudent("Brian Smith");
    course1.addStudent("Anne Kennedy");
    course1.addStudent("Susan Kennedy");
    course1.addStudent("John Kennedy");
    course1.addStudent("Kim Johnson");
    course1.addStudent("S1");
    course1.addStudent("S2");
    course1.addStudent("S3");
    course1.addStudent("S4");
    course1.addStudent("S5");
    course1.addStudent("S6");
    course1.addStudent("S7");
    
    course2.addStudent("Peter Jones");
    course2.addStudent("Steve Smith");
    
    cout << "Number of students in course1: "
    << course1.getNumberOfStudents() << endl;
    
    string *students = course1.getStudents();
    
    for (int i = 0; i < course1.getNumberOfStudents(); i++)
        cout << students[i] << ", ";
    
    cout << endl;
    
    cout << "Number of students in course2: "
    << course2.getNumberOfStudents() << endl;
    
    course1.dropStudent("S1");
    cout << "Number of students in course1: "
    << course1.getNumberOfStudents() << endl;
    students = course1.getStudents();
    
    for (int i = 0; i < course1.getNumberOfStudents(); i++)
        cout << students[i] << ", ";
    
    cout << endl;
    course1.clear();
    cout << "Number of students in course1: "
    << course1.getNumberOfStudents();
    
    return 0;
}