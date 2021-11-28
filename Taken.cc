#include <iostream>
#include <string>
#include <iomanip>
#include "Student.h"
#include "Course.h"
#include "Taken.h"

using namespace std;

Taken::Taken(){
  ptrStudent = nullptr;
  ptrCourse = nullptr;
  grade = '\0';
} //ddefault constructor

Taken::Taken(Student* myptrStudent, Course* myptrCourse, char myGrade){
  ptrStudent = myptrStudent;
  ptrCourse = myptrCourse;
  grade = myGrade;
} //constructor

void Taken::set(Student*  myptrStudent, Course*  myptrCourse, char myGrade){
  ptrStudent = myptrStudent;
  ptrCourse = myptrCourse;
  grade = myGrade;
} //setting data

Student* Taken::getStudent(){
  return ptrStudent;
} //get student pointer
Course* Taken::getCourse(){
  return ptrCourse;
}//get course pointer
void Taken::print(){

  const char separator = ' ';
  const int columnWidth = 8;

  cout << left << setw(columnWidth) << setfill(separator) << ptrStudent->getName();
  cout << left << setw(columnWidth) << setfill(separator) << ptrCourse->getCourseCode();
  cout << left << setw(columnWidth) << setfill(separator) << grade;
}
