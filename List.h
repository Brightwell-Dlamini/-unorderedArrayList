#pragma once

const int MaxSize = 15;
typedef  int DataType;

class List
{

private:
// data members - usually private
int size;
DataType Item [MaxSize];

public:
List(void); //constructor -- can be overloaded; not a member function
~List(void);
// data members - usually public, some may be private
	
bool IsEmpty (); //calling the IsEmpty method
bool IsFull  ();  //calling the isFull method
void  Insert (DataType); 
void  Delete (DataType); 
void  ShowData ();

};
