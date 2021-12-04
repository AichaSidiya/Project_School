#include <iostream>
#include <string>
#include <iomanip>
#include "DynArray.h"

using namespace std;

DynArray::DynArray(){
  size = 0;
  studentArr= new Student *[MAX_ARR];
} //ddefault constructor

DynArray::DynArray(Student* myStudentArr, int myArraysize){
  size = myArraysize;
  for(int i=0; i < myArraysize; i++){
    studentArr[i] = myStudentArr;
  }

} //constructor

DynArray::~DynArray(){
  cout << "----------------Deleting Dynamic Array---------------" << endl;
  delete [] studentArr;
}//destructor

void DynArray::set(Student* myStudentArr, int myArraysize){
  size = myArraysize;
  for(int i=0; i < myArraysize; i++){
    studentArr[i] = myStudentArr;
  }
} //setting data
void DynArray::add(Student* myStudentArr){
  if(size > MAX_ARR-1){
    cout << "Sorry you reached the maximum capacity of students!" << endl;
  }
  else{
    for(int position=0; position < size; position++){
      if(myStudentArr->lessThan(studentArr[position])){
        break;
      }
    }
    for(int i=size; i > position; i--){
      studentArr[i]=studentArr[i-1];
    }
    size++;
  }


}//adding course to StatArray
bool DynArray::find(string num, Student* myStudentArr){
  bool found = false;
  int location = 0;
  while((location < size) && (!found)){
    if(myStudentArr[location]->getId() == num){
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

void DynArray::print(){

cout << "This is student1 informations: " << endl;
  for(int i = 0; i < size; i++){
    studentArr[i]->print();
    cout << "---------------------------------------------------------" <<endl;
  }
}
