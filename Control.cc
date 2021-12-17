#include <iostream>
#include <iomanip>
#include <string>
#include "Control.h"

using namespace std;

Control::Control()
{
}

void Control::launch()
{
  School* school = new School("Stars University");
  int choice = 0;
  int id;
  string name, grade;

  initStudents(school);
  initCourses(school);

  while (1)
  {

    view.showMenu(choice);
    if (choice == 0)
      break;

    // students
    if (choice == 1)
    {
      school->printStudents();
    }
    //  Print courses
    if (choice == 2)
    {
      school->printCourses();
    }
    //  Print courses taken
    if (choice == 3)
    {
      school->printTaken();
    }
    //  Print courses taken by student

    if (choice == 4)
    {
      view.printStr("Please insert your student ID: ");
      view.readStr(name);
      school->printTakenByStu(name);
    }

    //  Add course taken by student
    if (choice == 5)
    {
      view.printStr("Please insert your student ID: ");
      view.readStr(name);
      view.printStr("Please insert your Course ID: ");
      view.readInt(id);
      view.printStr("Please insert your Grade: ");
      view.readStr(grade);
      school->addTaken(name, id, grade);
    }
  }
}

void Control::initStudents(School *sch)
{

   cout << "----------------Initializing the students data-----------------" << endl;

  sch->addStu(new Student("1111", "Wed", "Architecture", 7.5f));
  sch->addStu(new Student("2222", "Shahad", "Biology", 8.3f));
  sch->addStu(new Student("3333", "Hala", "CS", 11.5f));
}

void Control::initCourses(School *sch)
{

  cout << "----------------Initializing the course data-----------------" << endl;

  sch->addCourse(new Course(6105, "MATH", 1104, 'A', "F19", "Dr. Moussa"));
  sch->addCourse(new Course(5500, "MATH", 1104, 'B', "F19", "Dr. Moussa"));
  sch->addCourse(new Course(1008, "COMP", 1405, 'B', "W20", "Dr. Akila S"));
  sch->addCourse(new Course(1009, "COMP", 1406, 'B', "W20", "Dr. Helene K"));
}
