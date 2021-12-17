#include <iostream>
#include <string>
#include <iomanip>
#include "School.h"

using namespace std;

School::School(){ //default constructor
  name="";
  numTaken=0;
}
School::School(string schoolName){ //overloaded constructor
  name=schoolName;
  numTaken=0;

  // for(int i=0; i < MAX_ARR; i++){
  //   collecTaken[i] = nullptr;
  // }
}

School::~School(){ //destructor
  // cout << "----------------Deleting Dynamic Array---------------" << endl;
  // delete [] collectionOfStu;

}
void School::addStu(Student* newStudents){//adding a student to the DynArray object
  collectionOfStu.add(newStudents);
}
void School::addCourse(Course* newCourse){ //adding a course to the StatArray object
  collectionOfCrs.add(newCourse);
}
void School::addTaken(string stuNum, int cNum, string grade){ //adding a Taken object to the Taken list
  if(numTaken < MAX_ARR-1)
  {
    Student* s1;
    Course* c1;
    if(collectionOfStu.find(stuNum,&s1))//find the student
    {
        if(collectionOfCrs.find(cNum,&c1))//find the course
        {
          Taken* t1= new Taken(s1,c1,grade);//create a new Taken object
             collecTaken[numTaken]=t1;
             ++numTaken;
        }
        else
        {
          cout<<"Course is not find"<<endl;
        }

    }
    else
    {
      cout<<"Student is not find"<<endl;
    }
  }
  else
  {
      cout<<"Over MAX_ARR"<<endl;
  }

}

void School::printStudents(){ //print the students list

  cout << "---------Students list at the school---------" << endl;

  collectionOfStu.print();//pointer to the print function of DynArray

  cout << "--------------------------------------------------" <<endl;


}
void School::printCourses(){//print the courses list

  cout << "--------Courses list----------" <<endl;

  collectionOfCrs.print();//pointer to the print function of StatArray

  cout << "---------------------------------------------------" << endl;

}
void School::printTaken(){ //print Taken list

  if(numTaken == 0)
  {
    cout<<"----------------No Courses Taken yet-------------"<<endl;
  }
  else{
  cout << "--------Taken list---------" << endl;
  for (int i=0; i < numTaken-1; i++){
    collecTaken[i]->print(); //pointer to the print function of Taken
  }
  cout << "------------------------------------------------------";
  }
}
void School::printTakenByStu(string sid){ //print the courses taken by a given student

  if(numTaken==0)
  {
    cout<<"No student be added"<<endl;
  }
  else{
    Student *sId = nullptr;
    collectionOfStu.find(sid, &sId);

    const char separator = ' ';
    const int columnWidth = 16;

    for (int i = 0; i < numTaken-1; i++)
    {
      if (collecTaken[i]->getStudent()->getId() == sid){
        cout <<  collecTaken[i]->getStudent()->getName() << endl;
        collecTaken[i]->getCourse()->print();//pointer to getCourse function of Taken Class, Then pointer to print function of Course class
        cout << left << setw(columnWidth) << setfill(separator) << collecTaken[i]->getGrade();//pointer to the print function of Taken
      }
    }

    cout<<"-----------Student not FOUND!!-----------" <<endl;

  }
}
