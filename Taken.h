using namespace std;

class Taken{
private:
  //attributes
  Student* ptrStudent; //pointer to Student object
  Course* ptrCourse; //pointer to Course object
  char grade;

public:
  //methods
  Taken();//default constructor
  Taken(Student*, Course*, char); //constructor
  void set(Student*, Course*, char); //setting data
  Student* getStudent(); //getter Student
  Course* getCourse(); //getter Course
  void print();//print data
};
