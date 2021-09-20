/*
Name: Ydidiya Assefa, NSHE 2001132517, CS202-1001 Fall 2021, ASSIGNMENT 3
Description: <Design and implement three C++ classes to provide student >
Input: < student name Id finances, major code>
Output: < student summary>
*/
#ifndef grad_h
#define grad_h
#include<string>
#include "student.h" 
#include "underGrad.h"
using namespace std;

class grad:public underGrad //inheritance from underGrad
{
private:
bool isGA;
double Fees;
double MAX_FEES=5000.0;

public:
grad();
grad(string,string,string,string,double,double,double,string,underGrad::sStat,bool,double);
 
bool getGAstatus()const;
double getGradFees() const;
void setGAstatus(bool);
void setGradFees(double);
void showStudent();
};
#endif