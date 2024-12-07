#include <iostream>
#include <vector>
#include "Student.h"

// Function to display all students
void displayAll(const std::vector<Student>& students) {
    if (students.empty()) {
        std::cout << "No students to display.\n";
        return;
    }
    for (const auto& student : students) {
        student.display();
        std::cout << "----------------------\n";
    }
}

int main() {
    std::vector<Student> students; // List of students
    int choice;

    do {
        std::cout << "\nStudent Management System\n";
        std::cout << "1. Add Student\n";
        std::cout << "2. Display Students\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::string name;
            int rollNumber;
            float grade;

            std::cout << "Enter student name: ";
            std::cin.ignore(); // To handle newline after previous input
            std::getline(std::cin, name);

            std::cout << "Enter roll number: ";
            std::cin >> rollNumber;

            std::cout << "Enter grade: ";
            std::cin >> grade;

            students.emplace_back(name, rollNumber, grade);
            std::cout << "Student added successfully.\n";
            break;
        }
        case 2:
            displayAll(students);
            break;
        case 3:
            std::cout << "Exiting the program.\n";
            break;
        default:
            std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);

    return 0;
}
