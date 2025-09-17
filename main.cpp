#include <iostream>
#include <vector>
#include "student.h"

void displayMenu() {
    std::cout << "Student Record Management\n";
    std::cout << "1. Add student\n";
    std::cout << "2. Display all\n";
    std::cout << "3. Search by ID\n";
    std::cout << "4. Sort by marks\n";
    std::cout << "5. Exit\n";
    std::cout << "Choose: ";
}

int main() {
    std::vector<Student> students;
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int id;
                std::string name;
                float marks;
                std::cout << "Enter ID: ";
                std::cin >> id;
                std::cout << "Enter name: ";
                std::cin >> name;
                std::cout << "Enter marks: ";
                std::cin >> marks;
                students.push_back(Student(id, name, marks));
                std::cout << "Student added.\n";
                break;
            }
            case 2:
                for (const auto& student : students) {
                    student.display();
                }
                break;
            case 3: {
                int searchId;
                std::cout << "Enter ID to search: ";
                std::cin >> searchId;
                for (const auto& student : students) {
                    if (student.getId() == searchId) {
                        student.display();
                        break;
                    }
                }
                break;
            }
            case 4:
                std::sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
                    return a.getMarks() > b.getMarks();
                });
                std::cout << "Sorted by marks (high to low)\n";
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}