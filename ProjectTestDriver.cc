#include <iostream>
#include <string>
#include <iomanip>
#include "Course.h"
#include "Student.h"
#include "Taken.h"


using namespace std;

int main(){
  //-----------Student---------

  //Declaring student class variables
  string name, major, id;
  double gpa;
  Student student1, student2;//declaring a student object

  cout << "-----------Welcome to Effat University Student Database------------" << endl;
  cout << "Please Enter data to register students." << endl;
  cout << endl;

  //inputting the student information
  //-------------Student 1---------
  cout << "-------Student 1--------" << endl;
  cout << "Name: ";
  getline(cin, name);
  student1.setName(name);
  cout << "ID: ";
  getline(cin, id);
  student1.setId(id);
  cout << "Major: ";
  getline(cin, major);
  student1.setMajor(major);
  cout << "GPA: ";
  cin >> gpa;
  cout << endl;
  student1.setGpa(gpa);

  //----------Course-----------

  //declaring course variables
  string subject, term, instructor;
  int numCourse, code, idCourse;
  char section;

  //declaring a course object array
  cout << "How many courses did the student take this semester: ";
  cin >> numCourse;
  cout << endl;
  Course course[numCourse];

  //----------Taken-----------
  Student *ptrStudent1;
  char grade;
  Course *ptrCourse;
  Taken taken1[numCourse];

  ptrStudent1 = &student1;

  //inputting the course data
  for(int i = 0; i < numCourse; i++){
    ptrCourse = &course[i];
    cout << "Subject for course number " << i+1 << " : ";
    cin >> subject;
    cout << "Term for course number " << i+1 << " : ";
    cin >> term;
    cout << "ID for course number " << i+1 << " : ";
    cin >> idCourse;
    cout << "Code for course number " << i+1 << " : ";
    cin >> code;
    cout << "Grade for course number " << i+1 << " : ";
    cin >> grade;
    cout << "Section for course number " << i+1 << " : ";
    cin >> section;
    cin.clear();
		cin.ignore();
    cout << "Instructor for course number " << i+1 << " : ";
    getline(cin,instructor);
    cout << endl;
    course[i].set(idCourse, subject, code, section, term, instructor);
    taken1[i].set(ptrStudent1, ptrCourse, grade);
  }

//----------------Student 2------------
  cout << endl;
  cout << "-------Student 2--------" << endl;
  cout << "Name: ";
  getline(cin, name);
  student2.setName(name);
  cout << "ID: ";
  getline(cin, id);
  student2.setId(id);
  cout << "Major: ";
  getline(cin, major);
  student2.setMajor(major);
  cout << "GPA: ";
  cin >> gpa;
  cout << endl;
  student2.setGpa(gpa);

  cout << "How many courses did the student take this semester: ";
  cin >> numCourse;
  cout << endl;
  Course course2[numCourse];

  //-------------Taken----------
  Student *ptrStudent2;
  Course *ptrCourse2;
  //Taken courseTaken2[numCourse];
  Taken taken2[numCourse];

  ptrStudent2 = &student2;

  //inputting the course data
  for(int j = 0; j < numCourse; j++){
    ptrCourse2 = &course2[j];
    //courseTaken[j].setCourse(ptrCourse2);
    cout << "Subject for course number " << j+1 << " : ";
    cin >> subject;
    cout << "Term for course number " << j+1 << " : ";
    cin >> term;
    cout << "ID for course number " << j+1 << " : ";
    cin >> idCourse;
    cout << "Code for course number " << j+1 << " : ";
    cin >> code;
    cout << "Grade for course number " << j+1 << " : ";
    cin >> grade;
    cout << "Section for course number " << j+1 << " : ";
    cin >> section;
    cin.clear();
    cin.ignore();
    cout << "Instructor for course number " << j+1 << " : ";
    getline(cin,instructor);
    cout << endl;
    course2[j].set(idCourse, subject, code, section, term, instructor);
    taken2[j].set(ptrStudent2, ptrCourse2, grade);
}
/*------------------------------------------------------Printing the data------------------------------------------------------------------*/
//-----------Student 1-------------
  cout << "This is student1 informations: " << endl;
  student1.print();
  cout << endl;
  cout << "This is the course information: " << endl;
  const char separator = ' ';
  const int columnWidth = 8;

  cout << left << setw(columnWidth) << setfill(separator) << "ID";
  cout << left << setw(15) << setfill(separator) << "CourseCode";
  cout << left << setw(columnWidth) << setfill(separator) << "Section";
  cout << left << setw(columnWidth) << setfill(separator) << "Term";
  cout << left << setw(columnWidth) << setfill(separator) << "Instructor";
  cout << endl;
  for(int k = 0; k < numCourse; k++){
    course[k].print();
    cout << endl;
  }

  cout << "This is the course information for the courses taken by student 1: " << endl;

  cout << left << setw(columnWidth*2) << setfill(separator) << "StudentName";
  cout << left << setw(columnWidth*2) << setfill(separator) << "CourseCode";
  cout << left << setw(columnWidth*2) << setfill(separator) << "Grade";
  cout << endl;
  for(int l = 0; l < numCourse; l++){
    taken1[l].print();
    cout << endl;
  }
  //-------------Student2-----------
  cout << endl;
  cout << "This is student2 informations: " << endl;
  student2.print();
  cout << endl;
  cout << "This is the course information: " << endl;

  cout << left << setw(columnWidth) << setfill(separator) << "ID";
  cout << left << setw(15) << setfill(separator) << "CourseCode";
  cout << left << setw(columnWidth) << setfill(separator) << "Section";
  cout << left << setw(columnWidth) << setfill(separator) << "Term";
  cout << left << setw(columnWidth) << setfill(separator) << "Instructor";
  cout << endl;
  for(int m = 0; m < numCourse; m++){
    course2[m].print();
    cout << endl;
  }
  cout << endl;

  cout << "This is the course information for the courses taken by student 2: " << endl;

  cout << left << setw(columnWidth*2) << setfill(separator) << "StudentName";
  cout << left << setw(columnWidth*2) << setfill(separator) << "CourseCode";
  cout << left << setw(columnWidth*2) << setfill(separator) << "Grade";
  cout << endl;
  for(int n = 0; n < numCourse; n++){
    taken2[n].print();
    cout << endl;
  }
  // ---------comparing the students' names by the lessThan function-----------
  cout << "------The lessThan function-------" << endl;
  if (student1.lessThan(&student2)) {
    cout << student1.getName() << ", less then " << student2.getName() << endl;
  }
  else {cout << student2.getName() << ", less then " << student1.getName() << endl;}

  // ---------comparing the courses by the lessThan function-----------
  cout << "------The lessThan function-------" << endl;
  for (int o = 0; o < numCourse; o++){

    if (course[o].lessThan(&course2[o])) {
      cout << course[o].getCourseCode() << ", less then " << course2[o].getCourseCode() << endl;
    }
    else {cout << course2[o].getCourseCode() << ", less then " << course[o].getCourseCode() << endl;}

  }
  cout << endl;
  cout << "------Thank you for using our database-----" << endl;
  cout << "------You are now registered succesfully---" << endl;

  return 0;
}
