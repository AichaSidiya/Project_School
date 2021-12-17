#include <iostream>
#include <string>
#include <iomanip>
#include "StatArray.h"

using namespace std;

StatArray::StatArray(){
  size = 0;
  for(int i=0; i < MAX_ARR; i++){
    courseArr[i] = nullptr;
  }
} //ddefault constructor

StatArray::StatArray(Course* myCourseArr, int myArraysize){
  size = myArraysize;
  for(int i=0; i < myArraysize; i++){
    courseArr[i] = myCourseArr;
  }

} //constructor

void StatArray::add(Course* myCourseArr){
  if(size > MAX_ARR-1){
    cout << "Sorry you reached the maximum capacity of courses!" << endl;
  }
  else{
    int position=0;
    for(; position < size-1; position++){
      if(myCourseArr->lessThan(courseArr[position])){ //pointer to lessThan function of Course class and adding the new course
        break;
      }
    }
    size++;
    for(int i=size; i > position; i--){//increment the array size
      courseArr[i]=courseArr[i+1];
    }
  }
}//adding course to StatArray

bool StatArray::find(int id, Course** myCourseArr){
  bool found = false;
  int location = 0;
  while((location < size) && (!found)){
    if(myCourseArr[location]->getIdCourse() == id){//pointer to the getIdCourse function of Course class, and compare it with the given course id
      found = true;
    }
    else{
      location++;
    }
  }
  if(found){
    return found;
  }
  else{
    return false;
  }

}//finding the course

void StatArray::print(){

  cout << "This is the course information: " << endl;
  const char separator = ' ';
  const int columnWidth = 8;

  cout << left << setw(columnWidth) << setfill(separator) << "ID";
  cout << left << setw(15) << setfill(separator) << "CourseCode";
  cout << left << setw(columnWidth) << setfill(separator) << "Section";
  cout << left << setw(columnWidth) << setfill(separator) << "Term";
  cout << left << setw(columnWidth) << setfill(separator) << "Instructor";
  cout << endl;
  for(int i = 0; i < size-1; i++){
    courseArr[i]->print();
    cout << endl;
  }
} //printing the courses information
