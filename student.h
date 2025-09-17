#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Student {
public:
    int id;
    std::string name;
    float marks;

    Student(int id, const std::string& name, float marks);

    static void addStudent(std::vector<Student>& students, int id, const std::string& name, float marks);
    static void displayStudents(const std::vector<Student>& students);
    static Student* searchById(const std::vector<Student>& students, int id);
    static void sortByMarks(std::vector<Student>& students);
};

#endif // STUDENT_H