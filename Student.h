#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    int rollNumber;
    float grade;

public:
    // Constructor
    Student(std::string name, int rollNumber, float grade);

    // Getters
    std::string getName() const;
    int getRollNumber() const;
    float getGrade() const;

    // Display student details
    void display() const;
};

#endif
