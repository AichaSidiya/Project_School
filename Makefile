TARGETS	=	project

all:	$(TARGETS)


project:	ProjectTestDriver.o taken.o
	g++ -o project ProjectTestDriver.o taken.o

ProjectTestDriver.o:	ProjectTestDriver.cc taken.h
	g++ -c ProjectTestDriver.cc

taken.o: taken.cc taken.h
	g++ -c taken.cc

project:	ProjectTestDriver.o student.o
	g++ -o project ProjectTestDriver.o student.o

ProjectTestDriver.o:	ProjectTestDriver.cc student.h
	g++ -c ProjectTestDriver.cc

student.o: student.cc student.h
	g++ -c student.cc

project:	ProjectTestDriver.o course.o
	g++ -o project ProjectTestDriver.o course.o

ProjectTestDriver.o:	ProjectTestDriver.cc course.h
	g++ -c ProjectTestDriver.cc

course.o: course.cc course.h
	g++ -c course.cc

clean:
	rm -f *.o project
