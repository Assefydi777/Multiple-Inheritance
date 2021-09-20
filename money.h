/*
Name: Ydidiya Assefa, NSHE 2001132517, CS202-1001 Fall 2021, ASSIGNMENT 3
Description: <Design and implement three C++ classes to provide student >
Input: < student name Id finances, major code>
Output: < student summary>
*/
#ifndef money_h
#define money_h
#include<string>
class money
{
    private:
    double balance,financialAid,charges;
    double MAX_CHARGES=10000.0;
    public:
    money();
    money(double,double);
    void getCharges(double &, double &);
    double getBalance();
    void setCharges(double, double);
    bool checkCharges(double); 
    bool checkAid(double,double);
    bool checkBalance(double,double);
    double getCharge();
    double getAid();
};
#endif