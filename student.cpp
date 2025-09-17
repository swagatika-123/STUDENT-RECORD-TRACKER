#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"

void Student::addStudent(int id, const std::string& name, int marks) {
    this->id = id;
    this->name = name;
    this->marks = marks;
    students.push_back(*this);
}

void Student::displayStudents() {
    std::cout << "ID\tName\tMarks\n";
    for (const auto& student : students) {
        std::cout << student.id << "\t" << student.name << "\t" << student.marks << "\n";
    }
}

Student* Student::searchByID(int id) {
    for (auto& student : students) {
        if (student.id == id) {
            return &student;
        }
    }
    return nullptr;
}

void Student::sortByMarks() {
    std::sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.marks > b.marks;
    });
    std::cout << "Sorted by marks (high to low)\n";
}