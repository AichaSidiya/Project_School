#include <iostream>
#include "student.h"

student::student(){
  ids = 0;
  n = "";
  m = "";
  gpas = 0.0;
} //default constructor
student::student(int ids, string n, string m , double gpas){
  ids = id;
  n = name;
  m = major;
  gpas = gpa;
} //parameter constructor
void student::setId(int ids){
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
int student::getId(){
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
bool student::lessThan(const Student& otherStudent) const{
  return name < otherStudent.name;
} //retuning name lesThan.
