<!--Title-->
# Stars University 

## Purpose
<!--Purpose of the project-->
This poject is a Stars University database. The purpose of this project is to build a menu driven program using multiple class to display the Stars University database information. 

<img src="https://github.com/AichaSidiya/Project_School/blob/main/demoSchool.gif"/>


<!--Header 2 description of the project-->
## Description
<p style="text-align: justify">
The project is a menu driven program divided into multiple class. The program should display the menu and asks the user to choose whether to display the student information extrated from the Student class and DynArray class, or display the course information using the Course and StatArray class, display the Taken objects which are the information of a course taken by a particular student the program uses the Taken and School class to diplay the information. Finally, the user can add a Taken object using the DynArray class. The flow of the project is implemented in the Control class and the View is used to display the menu.</p>

## Menu
* (1) Print Student
* (2) Print Courses
* (3) Print all courses taken - prints student, course name, grade
* (4) Print course taken by student - print student name, course name, grade
* (5) Add course taken by student
* (0) Exit

<!-- Files of the project-->
## Files

### Header Files

* Control.h
* Course.h
* DynArray.h
* School.h
* StatArray.h
* Student.h
* Taken.h
* View.h

### Source Files

* Control.cc
* Course.cc
* DynArray.cc
* School.cc
* StatArray.cc
* Student.cc
* Taken.cc
* View.cc
* ProjectTestDriver.cc

## Built With
* C++

<!--Header 3 installation and launching the project-->
## Installation
* Clone the repository to your local machine:
```
git clone https://github.com/AichaSidiya/Project_School.git
```
* Install [g++ 8.1.0 (MinGW)](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download)
* Compile the project using: 
<!--commands to run the program "make project" compile the program--> 
```
make project 
```
* Execute it using
<!--commands to run the program "project" run and executes program-->
```
project 
```
### Help
If the code does not compile use 
<!--commands to remove object and excevutable files "project"-->
```
make clean
```
to remove object and excevutable files.

## Authors
<!-- The contributors to the project-->
* [Aicha Sidiya](https://github.com/AichaSidiya)
* [Hanin Alzaher](https://github.com/hanin-az)
* Lamr Aljahdali
* Joud Kaki


## Acknowledgments
<!-- Insparation files, codes, and general refrences used in writing the code of the project-->
* Book - C++ Programming. Program Design including Data Structures by D.S. Malik
* StatArray.h
* [Dynamic Array](https://www2.cs.sfu.ca/CourseCentral/225/johnwill/lab_arrays_intro.html)
* [C++ Pre-processor](https://doc.bccnsoft.com/docs/cppreference_en/preprocessor/all.html)
* [C++ documentation](https://www.cplusplus.com/doc/)
* [Readme Template](https://gist.github.com/DomPizzie/7a5ff55ffa9081f2de27c315f5018afc)
* [Readme Content](https://ecotrust-canada.github.io/markdown-toc/)
