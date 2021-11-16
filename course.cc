#include <iostream>
#include "course.h"

course(){
  idCourse = 0;
  subject = "";
  code = 0;
  section = '\0';
  term = "";
  instructor = "";
} //default constructor
course(int idc, string s, int c, char sec, string t, string i){
  idCourse = idC;
  subject = s;
  code = c;
  section = sec;
  term = t;
  instructor = i;
} //constructor
int getIdCourse(){
  return idCourse;
} //getter id
string getCourseId(){
  return subject + code;
} //return function prototype that returns the concatenated course code
bool lessThan(const Course& otherCourse) const{
  if(subject < otherCourse.subject){
    return true;
  }//comparing subject
  else if(code < otherCourse.code){
    return true;
  }//comparing course code
  else if(term < otherCourse.term){
    return true;
  }//comparing term
  else if(section < otherCourse.section){
    return true;
  }//comparing section
} //lessThan function prototype
void print() const{
  cout << "The course id is: " << idCourse << endl; //printing the course id
  cout << "The course subject is: " << subject << endl; //printing the course subject
  cout << "The course code is: " << code << endl; //printing the course code
  cout << "The complete course code is: " << getCourseId << endl;//printing the full course code
  cout << "The course section is: " << section << endl; //printing the course section
  cout << "This course is offerred in: " << term << endl; //printing the term in which the course is offerred
  cout << "This course taught by: " << instructor << endl; //printing the course instructor
}//print data
