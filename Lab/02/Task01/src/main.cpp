#include <iostream>
#include "student.h"
#include "teacher.h"
#include "course.h"

int main() {
    // Create some students
    Student s1("Talha");
    Student s2("Fahad");

    // Create some teachers
    Teacher t1("Ms. Khadija tul kubra");
    Teacher t2("sir Farooq");

    // Create some courses
    Course c1("OS");
    Course c2("PF");

    // Assign students and teachers to courses
    s1.enroll(&c1);
    s2.enroll(&c2);

    t1.assign(&c1);
    t2.assign(&c2);

    c1.addStudent(&s1);
    c1.addTeacher(&t1);

    c2.addStudent(&s2);
    c2.addTeacher(&t2);

    std::cout << "Course: " << c1.getName() << "\n";
    for (const auto& student : c1.getStudents()) {
        std::cout << "  Student: " << student->getName() << "\n";
    }
    for (const auto& teacher : c1.getTeachers()) {
        std::cout << "  Teacher: " << teacher->getName() << "\n";
    }

    std::cout << "Course: " << c2.getName() << "\n";
    for (const auto& student : c2.getStudents()) {
        std::cout << "  Student: " << student->getName() << "\n";
    }
    for (const auto& teacher : c2.getTeachers()) {
        std::cout << "  Teacher: " << teacher->getName() << "\n";
    }

    return 0;
}

