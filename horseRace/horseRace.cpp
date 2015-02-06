/* Horse Race game in c++ using UML diagram */
#include <iostream>
#include <string>
#include <random>
#define TRACK 20

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
	int position = 0;
/* methods (public)
public: 
Horse(); null constructor
*/
public:
	Horse(){
		advance();
		getPosition();
		cout << "Horse() NULL constructor" << endl;
	};
	//~Horse();// wtf is this tilda for, TA??
	/* public methods 
	void advance();// changes position value
	int getPosition();// returns position
	*/
	void advance(){
		cout << "Horse.advance() method\nPostion: " << position << endl;
		int coinFlip = rand() %2 +1;
		cout << "Coin Flip: " << coinFlip << endl;
		if (coinFlip == 2){
			/* if Heads (not Tails), then advance */
			position = position + 1;
		}// end if statement for coin flip
		
		
	};// end advance() method

	int getPosition(){
		cout << "Horse.getPosition() method\nPosition returned: " << position << endl;
		return position;// maybe no ++?
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
	//int Horse[];// 'int' or nah?
public:
/*
public:
	int length;
Race(); null constructor
*/
	int length;
	Race(){
		Horse();
		printLane(0);
		start();
		cout << "Hello null Race() constructor" << endl;
	};// end null constructor

	//Race(int length){};
	/* single paramter contructor */
	Race(int length){
		cout << "Hello single-parameter Race() constructor" << endl;
	};// end single parameter constructor
	//~Race();

	/* data and class methods */
	void printLane(int horseNum){
		cout << "Race.printLane() method" << endl;
		for (int i = 0; i < TRACK; ++i){
			/* print race track */
			cout << '.';
		}// end for loop iteration thru track size
		cout<< endl;

	};// end printLane() method

	void start(){
		cout << "Hello Race.start() method" << endl;

	};// end start() method
};












/* main function */
int main(int argc, char const *argv[])
{
	/* seed randomizer */
	srand(time(NULL));
	/* call to construct 5x null horses in race class */
	Race Horse[5];

	/* main function code */
	cout << "Hello WOrld" << endl;
	return 0;
}































