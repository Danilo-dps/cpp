// Main.cpp
#include <iostream>
#include <string>
#include "GradeBook.h"

using std::cout;
using std::string;

int main()
{
    // Create a GradeBook object
    GradeBook myGradeBook( "CS101 Introduction to C++ Programming" );

    myGradeBook.displayMessage(); // Display welcome message
    myGradeBook.inputGrades(); // Read grades from user
    myGradeBook.displayGradeReport(); // Display the report
    
    return 0; // Indicate successful termination
}
