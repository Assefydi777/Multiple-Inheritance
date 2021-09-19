#include <iostream>
#include "student.h"
#include "underGrad.h"

using namespace std;
 

int main(int argc, char **argv)
{
    cout << "*************************************** Multiple Inheritance ************************** \n";
    std::string lastName = "Tarekegn";
    std::string firstName = "Brook";
    std::string studentID = "L000018716", major = "MIS";
    double gpa = 2.2;

    double charges = 2.0;
    double finance = 9.0;
    std::string advisor = "Vinky";
    underGrad under;
 
    // enum sStat status = NONE;
    //  student s(lastName, firstName, studentID, major, gpa, charges, finance); 
   underGrad u(lastName, firstName, studentID, major, gpa, charges, finance, advisor, under.getStatus()); 
}