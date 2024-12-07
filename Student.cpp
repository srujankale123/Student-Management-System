#include "Student.h"
#include <iostream>
#include <iomanip>

// Constructor
Student::Student(std::string name, int rollNumber, float grade)
    : name(name), rollNumber(rollNumber), grade(grade) {}

// Getters
std::string Student::getName() const { return name; }
int Student::getRollNumber() const { return rollNumber; }
float Student::getGrade() const { return grade; }

// Display details
void Student::display() const {
    std::cout << std::setw(10) << "Name: " << name << "\n";
    std::cout << std::setw(10) << "Roll No: " << rollNumber << "\n";
    std::cout << std::setw(10) << "Grade: " << grade << "\n";
}
