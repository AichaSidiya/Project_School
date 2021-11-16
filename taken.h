class Taken{
private:
  //attributes
  Student* ptrStudent; //pointer to Student object
  Course* ptrCourse; //pointer to Course object
  char grade;

public:
  //methods
  taken(Student*, Course*, char); //constructor
  Student* getStudent(); //getter Student
  Course* getCourse(); //getter Course
  void print() const;//print data
}
