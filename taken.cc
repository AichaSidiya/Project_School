#include <iostream>
#include "taken.h"

taken::taken(Student* ptrS, Course* ptrC, char g){
  ptrS = ptrStudent;
  ptrC = ptrCourse;
  g = grade;
} //constructor
Student* taken::getStudent(){
  return ptrStudent;
} //get student pointer
Course* taken::getCourse(){
  return ptrCourse;
}//get course pointer
void taken::print() const{
  cout << "The student name is: " << ptrStudent.name << endl; //printing the name of the student
  cout << name << " " << "is taking " << ptrCourse.courseCode << endl;  //printing the course code
  cout << name << " " << "got " << grade << " in this course. " << endl;  //printing the grade earned by the student
}
