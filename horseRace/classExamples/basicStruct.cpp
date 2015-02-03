/* andy harris class example */
//basicStruct.cpp

//structs are like classes
//only public members
//can have different types
//all members have names
//available in C and C++

#include <iostream>
#include <string>

using namespace std;

/* build data structure
(much like an object or class) */
struct date{
  int day;
  string month;
  int year;
};

int main(){
	/* a structure is what classes are
	the idea of classes */
	/* define value of date
	(Date.today() in Python3) */
    date today;
    today.day = 2;// give it a day
    today.month = "Sep";// give it a month
    today.year = 2010;// give it a year

    cout << "Day: " << today.day
         << ", Month: " << today.month
         << ", Year: " << today.year << endl;
} // end main