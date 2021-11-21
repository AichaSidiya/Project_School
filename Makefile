TARGETS	=	project

all:	$(TARGETS)

project:	ProjectTestDriver.o Student.o  Course.o
	g++ -o project ProjectTestDriver.o Student.o Course.o

ProjectTestDriver.o:	ProjectTestDriver.cc Student.h  Course.h
	g++ -c ProjectTestDriver.cc

Student.o: Student.cc Student.h
	g++ -c Student.cc

Course.o: Course.cc Course.h
	g++ -c Course.cc

clean:
	rm -f *.o project
