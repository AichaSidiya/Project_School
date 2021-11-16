class Student{
private:
  //attributes
  string id; //student identifier
  string name; //student name
  string major; //student major
  double gpa; //student gpa

public:
  //methods
  student(); //default constructor
  student(string, string, string, double); //constructor
  void setId(int); //setter id
  void setName(string); //setter name
  void setMajor(string); //setter major
  void setGpa(double); //setter gpa
  int getId(); //getter id
  string getName(); //getter name
  string getMajor(); //getter major
  double getGpa(); //getter gpa
  bool lessThan(in stu:Student*); //lessThan function prototype
  void print() const;
}
