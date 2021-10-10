/*
Name: Ydidiya Assefa, NSHE 2001132517, CS202-1001 Fall 2021, ASSIGNMENT 3
Description: <Design and implement three C++ classes to provide student >
Input: < student name Id finances, major code>
Output: < student summary>
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "underGrad.h"
#include "student.h"
#include "money.h"
using namespace std;
underGrad::underGrad(){}
underGrad::underGrad(std::string ltName, std::string ftName, std::string stID, std::string majCodes, double grpa, double charg, double finAid, std::string advisor, sStat status)
{
    //constructors
        student::setName(ltName, ftName);//from student 
        student::setID(stID);//from student
        student::expandMajorCode(majCodes);//from student
        student::setGPA(grpa);//from student
        money::setCharges(charg,finAid);//from money 
        underGrad::setAdvisor(advisor);//from underGrad
        underGrad::setStatus(status);//from underGrad
        showStudent();
}
string underGrad::getAdvisor() const
{
    //return the advisor
    return advisor;
}
underGrad::sStat underGrad::getStatus() const
{
    return Status;//return status
}
void underGrad::setAdvisor(string sAdvisor)
{
    advisor = sAdvisor;//passed value set 
}
void underGrad::setStatus(sStat status)
{
    Status = status;//passed value set
}
void underGrad::showStudent()
{ 
    //display summary based on the format
        std::string indent(5, ' ');
    std::string bars;
    bars.append(70, '-');

    std::cout << endl
              << bars << endl;
 
    std::cout << "Student Summary" << endl;
    std::cout << indent << " Name: " << getName() << endl;
    std::cout << indent << " ID: " << getID() << endl;
    std::cout << indent << " Major: " << getMajor() << endl;
    std::cout << fixed << showpoint << setprecision(2);
    std::cout << indent << " GPA: " << getGPA() << endl;
    std::cout << indent << "Charges: " << setw(8) <<  money::getCharge() << indent
    << indent << indent << "Financial Aid: " <<
    setw(8) <<money::getAid() << endl;
    std::cout << indent << "Balance: " << setw(8) <<
    money::getBalance() << endl;
    // set status as probation based on GPA
    if (student::getGPA() <= 1.7)
    {
       sStat status = PROBATION;
       setStatus(status);
    }else{
       sStat status = GOOD;
       setStatus(status); 
    }

   // Print the Status based on the Enum value returned 
   if (Status == 0)
    {
        string statusName = "PROBATION";
        string indent(5, ' ');
        cout << indent << "Advisor: " << left << setw(17) << advisor;
        cout << indent << " Status: " << statusName;
        cout << endl;
    }
    if (Status == 1)
    {
        string statusName = "GOOD"; 
        string indent(5, ' ');
        cout << indent << "Advisor: " << left << setw(17) << advisor;
        cout << indent << " Status: " << statusName;
        cout << endl;
    }
    if (Status == 2)
    {
        string statusName = "SPECIAL"; 
        string indent(5, ' ');
        cout << indent << "Advisor: " << left << setw(17) << advisor;
        cout << indent << " Status: " << statusName;
        cout << endl;
    } 
}
