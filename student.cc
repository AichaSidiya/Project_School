#include <iostream>
#include "student.h"

student::student(){
  id = "";
  name = "";
  major = "";
  gpa = 0.0;
} //default constructor
student::student(int ids, string n, string m , double gpas){
  id = ids;
  name = n;
  major = m;
  gpa = gpas;
} //parameter constructor
void student::setId(string ids){
  ids = id;
} //set ID
void student::setName(string n){
  n = name;
} //set name
void student::setMajor(string m){
  m = major;
} //set major
void student::setGpa(double gpas){
  gpas = gpa;
} //set gpa
string student::getId(){
  return id;
} //get ID
string student::getName(){
  return name;
} //get name
string student::getMajor(){
  return major;
}//get major
double student::getGpa(){
  return gpa;
} //get gpa
bool student::lessThan(in stu:Student* otherStudent){
  return name < otherStudent.name;
} //retuning name lesThan.

void student::print() const{
    cout << "Student's number: " << id << endl;
    cout << "Student's name: " << name << endl;
    cout << "Student's major: " << major << endl;
    cout << "Student's GPA: " << gpa << endl;
}//print the data of the object
