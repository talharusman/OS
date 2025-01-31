#include "teacher.h"

Teacher::Teacher(const std::string& name) : name(name) {}

void Teacher::assign(Course* course) {
    courses.push_back(course);
}

const std::string& Teacher::getName() const {
    return name;
}

const std::vector<Course*>& Teacher::getCourses() const {
    return courses;
}

