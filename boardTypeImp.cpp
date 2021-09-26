/*
Name: Ydidiya Assefa, 2001132517, CS202 1001-2021FALL, ASSIGNMENT#4
Description: <per assignment>
Input: <per assignment>
Output: <per assignment>
*/
#include<iostream>
#include<string>
#include<array>
#include"boardType.h"
boardType::boardType(int SIZE)
{
  if(BRD_SIZE_MIN<=SIZE && SIZE<=BRD_SIZE_MAX)
  {
      int Size1=size;
      int Size2=size;
 board=new int *[SIZE];
    for(int i=0; i<Size1; i++){
        board[i]=new int [Size2];
    }
  }
  else 
  {
      cout<<"Error, invalid board size"<<endl;
      cout<<"No board created"<<endl;
      board=NULL;
  }
}
boardType::~boardType()
{
//delete the matrix at deconstructor
  for(int i=0; i<size; i++){
        if(board!=NULL)
            delete [] board[i];
        }

        delete [] board;

 

       board=NULL;

        cout<<endl;
}
int boardType::getCell(int rows,int columns)const
{
   if (BRD_SIZE_MIN<=size && size<=BRD_SIZE_MAX)
    {

       return rows,columns;
    }
      else
    {
        cout<<"Error, invalid board location"<<endl;
        int sz=0;
      return sz;
    }

}
void boardType::setCell(int row,int column,int value)
{
    if (BRD_SIZE_MIN<=size && size<=BRD_SIZE_MAX)
    {
      for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
           board[i][j]=rand()%100;
        }
      } 

    }
     else 
     {
     cout<<"Error, invalid board location."<<endl;
     }



}
int boardType::getOrder()const
{
 int arrSize = sizeof(board)/sizeof(board[0]);
return arrSize;
}
void boardType::printGrid()const
{
   
    cout<<"Print Grid: "<<endl;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl; 
}
}