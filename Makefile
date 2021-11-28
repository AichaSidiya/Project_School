TARGETS	=	project

all:	$(TARGETS)

project:	ProjectTestDriver.o Student.o  Course.o Taken.o
	g++ -o project ProjectTestDriver.o Student.o Course.o Taken.o

ProjectTestDriver.o:	ProjectTestDriver.cc Student.h  Course.h Taken.h
	g++ -c ProjectTestDriver.cc

Student.o: Student.cc Student.h
	g++ -c Student.cc

Course.o: Course.cc Course.h
	g++ -c Course.cc

Taken.o: Taken.cc Taken.h
	g++ -c Taken.cc
clean:
	rm -f *.o project
