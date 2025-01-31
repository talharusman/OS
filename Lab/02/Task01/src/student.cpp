#include "student.h"

Student::Student(const std::string& name) : name(name) {}

void Student::enroll(Course* course) {
    courses.push_back(course);
}

const std::string& Student::getName() const {
    return name;
}

const std::vector<Course*>& Student::getCourses() const {
    return courses;
}
