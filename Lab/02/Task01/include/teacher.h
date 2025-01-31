#ifndef TEACHER_H
#define TEACHER_H

#include <string>
#include <vector>
#include "course.h"

// Forward declaration
class Course;

class Teacher {
private:
    std::string name; // Fixed invalid syntax
    std::vector<Course*> courses; // List of courses the teacher is teaching
public:
    Teacher(const std::string& name);
    void assign(Course* course); // Fixed typo in parameter name
    const std::string& getName() const;
    const std::vector<Course*>& getCourses() const;
};

#endif // TEACHER_H

