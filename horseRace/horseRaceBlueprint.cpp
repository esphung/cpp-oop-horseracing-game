/* Horse Race game in c++ using UML diagram */
#include <iostream>
#include <string>

using namespace std;

/* function prototypes */
// Horse() methods
void advance();
int getPosition();
// Race() methods
void printLane(int horseNum);
void start();



/* Horse class */
// Horse(){};
class Horse{
/* data members 
private 
int position;
*/
private:
	int position;
/* methods (public)
public: 
Horse(); null constructor
*/
public:
	Horse();
	//~Horse();// wtf is this tilda for, TA??
	/* public methods 
	void advance();// changes position value
	int getPosition();// returns position
	*/
	void advance(){
		position = position + 1;
	};// end advance() method

	int getPosition(){
		return position;
	};// end getPosition() method

};// end Horse class













/* Race class */
// Race(){};

class Race{
/* Data members 
private:
Horse[];
*/
private:
	int Horse[];// 'int' or nah?
public:
/*
public:
Race(); null constructor
*/
	Race(){
	};// end null constructor

	//Race(int length){};
	Race(int length){

	};// end single parameter constructor
	//~Race();

	/* data and class methods */
	void printLane(int horseNum){

	};// end printLane() method

	void start(){

	};// end start() method
};



// public:
// Race(); // null constructor
// Race(int length); // single paramter contructor
// void printLane(int horseNum);
// void start();








/* main function */
int main(int argc, char const *argv[])
{
	/* main function code */
	cout << "Hello WOrld" << endl;
	return 0;
}































