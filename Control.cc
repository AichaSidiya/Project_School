#include <iostream>
using namespace std;
#include <string>
#include "Control.h"


Control::Control(){

}

void Control::launch()
{

  School* cuRavens = new School("Effat Uni");
  initStudents(cuRavens);
  initCourses(cuRavens);
  int choice = 0;
  
  while (1) {
    view.showMenu(choice);
    if (choice == 0)
      break;

	// to complete
  }
}

void Control::initStudents(School* sch)
{
  cout << "Initializing the students data...." << endl;
  // to complete

}

void Control::initCourses(School* sch)
{
   // to complete
}

