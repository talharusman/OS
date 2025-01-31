#ifndef STUDENT_H
#define STUDENT_H

#include <string> 
#include <vector>
#include "course.h"

// Forward declaration
class Course;

class Student {
private:
    std::string name;
    std::vector<Course*> courses; // List of enrolled courses
public:
    Student(const std::string& name); 
    void enroll(Course* course);
    const std::string& getName() const;
    const std::vector<Course*>& getCourses() const; 
};

#endif // STUDENT_H

