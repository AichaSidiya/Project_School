using namespace std;

class Taken{
private:
  //attributes
  Student* ptrStudent; //pointer to Student object
  Course* ptrCourse; //pointer to Course object
  string grade;

public:
  //methods
  Taken();//default constructor
  Taken(Student*, Course*, string); //constructor
  void set(Student*, Course*, string); //setting data
  Student* getStudent(); //getter Student
  Course* getCourse(); //getter Course
  void print();//print data
};
