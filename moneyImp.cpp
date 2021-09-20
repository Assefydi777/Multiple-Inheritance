/*
Name: Ydidiya Assefa, NSHE 2001132517, CS202-1001 Fall 2021, ASSIGNMENT 3
Description: <Design and implement three C++ classes to provide student >
Input: < student name Id finances, major code>
Output: < student summary>
*/
#include <iostream>
#include <string.h>
#include <string>
#include "money.h"

using namespace std;
money::money() {}
money::money(double charges, double aid)
{
 //constructor
    if (!checkCharges(charges))// check charges 
    {
        std::cout << "Error! The charges set is out of range." << endl;
    }

    if (!checkAid(charges, aid))//check aid once charges are checked
    {
        std::cout << "Error! The Financial Aid entered is out of range." << endl;
    } 

    if (!checkBalance(charges, aid))//check balance once charges and aid 
    {
        std::cout << "Error! The Balance is incorrect." << endl;
    }
}

bool money::checkCharges(double charges)
{ //check charges based on the given parameter where charge has to be in between 0-5000
    if (0.0 < charges && charges <= MAX_CHARGES)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool money::checkAid(double charges, double aid)
{
    //check aid value base on the given rubric parameters
    if (0.0 < aid && aid <= charges)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool money::checkBalance(double charges, double aid)
{
    //check balance by calculating the difference between the charges and aid
    double difference = charges - aid;
    if (getBalance() == difference)//if equal return true if not false
    {
        return true;
    }
    else
    {
        return false;
    }
}
double money::getBalance()
{
    balance = charges - financialAid;//balance calculator
    return balance;
}
double money::getCharge()
{
    return charges;//return charge value
}
double money::getAid()
{
    return financialAid;//return financial aid value
}
void money::setCharges(double charged, double aid)
{ 
    charges = charged;
    financialAid = aid;
}

void money::getCharges(double &charge, double &aid)
{//return values of charge and aid based on reference
    charges = charge;
    financialAid = aid;
}