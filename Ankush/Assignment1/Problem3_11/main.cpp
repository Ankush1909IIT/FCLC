// Fig. 3.13: fig03_13.cpp
// GradeBook class demonstration after separating
// its interface from its implementation.
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;
// function main begins program execution
int main()
{
// create two GradeBook objects
    GradeBook gradeBook1( "CS101 Introduction to C++ Programming" , "Baskar G");
    GradeBook gradeBook2( "CS102 Data Structures in C++" , "Adarsh K" );
// display initial value of courseName for each GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
         <<"taught by:"<< gradeBook1.getInstructorName()
         << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
         <<"taught by:"<< gradeBook2.getInstructorName()
         << endl;
    gradeBook1.displayMessage();
    gradeBook2.displayMessage();
} // end main