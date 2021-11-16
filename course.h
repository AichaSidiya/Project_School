class Course{
private:
  //attributes
  int idCourse; //course identifier
  string subject; //course subject
  int code; //course code
  char section; //course section
  string term; //course term
  sting instructor; //course instructor

public:
  //methods
  course(); //default constructor
  course(int, string, int, char, string, string); //constructor
  int getIdCourse(); //getter id
  string getCourseId(); //return function prototype that returns the concatenated course code
  bool lessThan(in course:Course*); //lessThan function prototype
  void print() const;//print data
}
