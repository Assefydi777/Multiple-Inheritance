#ifndef boardType_h
#define boardType_h
#include<iostream>
#include<string>
using namespace std;
class boardType
{
protected:
int size;
int **board;
private:
const int BRD_SIZE_MIN=3;
const int BRD_SIZE_MAX=30;
public:
boardType(int);
~boardType();
void setCell(int,int,int);
int getCell(int,int)const;
int getOrder()const;
void printGrid()const;

};
#endif