/*
Name: Ydidiya Assefa, NSHE 2001132517, CS202-1001 Fall 2021, ASSIGNMENT 3
Description: <Design and implement three C++ classes to provide student >
Input: < student name Id finances, major code>
Output: < student summary>
*/
#ifndef underGrad_h
#define underGrad_h
#include<string>
#include<iostream>
#include"student.h"
using namespace std;
class underGrad:public student
{ 
    protected:
    enum sStat{PROBATION, GOOD, SPECIAL, NONE};
    private:
    string advisor = "";
    sStat Status = NONE;
    public:
    underGrad();
    underGrad(string,string,string,string,double,double,double,string,sStat);
    string getAdvisor()const;
    sStat getStatus()const;
    void setAdvisor(string);
    void setStatus(sStat);
    void showStudent();
};
#endif
