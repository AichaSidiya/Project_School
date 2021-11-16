#ifndef CONTROL_H
#define CONTROL_H

#include "School.h"
#include "View.h"

//Control class that controls the classes and initializes students and courses in the school, and allows user to do inputs from there to print or whatever.
class Control
{
  public:
  	Control();
  	void launch();
  	void initStudents(School* sch);
  	void initCourses(School* sch);
	

  private:
  	View view;
};

#endif
