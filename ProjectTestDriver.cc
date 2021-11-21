#include <iostream>
#include <string>
#include <iomanip>
#include "Course.h"
#include "Student.h"
//#include "taken.h"

using namespace std;

int main(){
  //-----------Student---------

  //Declaring student class variables
  string name, major, id;
  double gpa;
  Student student1;//declaring a student object

  cout << "-----------Welcome to Effat University Student Database------------" << endl;
  cout << "Please Enter your data to register." << endl;

  //inputting the student information
  cout << "Enter Your name: ";
  getline(cin, name);
  student1.setName(name);
  cout << "Enter Your student id: ";
  getline(cin, id);
  student1.setId(id);
  cout << "Enter Your major: ";
  getline(cin, major);
  student1.setMajor(major);
  cout << "Enter Your gpa: ";
  cin >> gpa;
  cout << endl;
  student1.setGpa(gpa);

  //----------Course-----------

  //declaring course variables
  string subject, term, instructor;
  int numCourse, code, idCourse;
  char section;

  //declaring a course object array
  cout << "How many courses did you take this semester: ";
  cin >> numCourse;
  cout << endl;
  Course course[numCourse];

  //inputting the course data
  for(int i = 0; i < numCourse; i++){
    cout << "Enter the course subject for course number " << i+1 << " : ";
    cin >> subject;
    cout << "Enter the course term for course number " << i+1 << " : ";
    cin >> term;
    cout << "Enter the course ID for course number " << i+1 << " : ";
    cin >> idCourse;
    cout << "Enter the course code for course number " << i+1 << " : ";
    cin >> code;
    cout << "Enter the course section for course number " << i+1 << " : ";
    cin >> section;
    cin.clear();
		cin.ignore();
    cout << "Enter the course instructor for course number " << i+1 << " : ";
    getline(cin,instructor);
    cout << endl;
    course[i].set(idCourse, subject, code, section, term, instructor);
  }

/*------------------------------------------------------Printing the data------------------------------------------------------------------*/

  cout << "This is the student informations: " << endl;
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
  for(int i = 0; i < numCourse; i++){
    course[i].print();
    cout << endl;
  }

  cout << "------Thank you for using our database-----" << endl;
  cout << "------You are now registered succesfully---" << endl;

  return 0;
}
