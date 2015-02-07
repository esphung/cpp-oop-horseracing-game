/* Horse Race game in c++ using UML diagram */
#include <iostream>
#include <string>
#include <random>
#define TRUE 1
#define FALSE 0
#define TRACK 20

using namespace std;

/* function prototypes */
void advance();
int getPosition();
void printLane(int horseNum);
void start();

bool keepGoing;

/* ================== HORSE CLASS =============================== */

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
	Horse(){
		//cout << "Horse() NULL constructor" << endl;
		Horse::advance();
		Horse::getPosition();
		
	};
	void advance();
	int getPosition();
	int setPosition();


};// end Horse class

/* ================== HORSE METHODS =============================== */

void Horse::advance(){
	//cout << "Horse.advance() method\nPostion: " << position << endl;
	int coinFlip = rand() %2 +1;
	//cout << "Coin Flip: " << coinFlip << endl;
	if (coinFlip == 2){
		/* if Heads (not Tails), then advance */
		position = position + 1;
	}// end if statement for coin flip
	
	
};// end advance() method

int Horse::getPosition(){
	//cout << "Horse.getPosition() method\nPosition returned: " << position << endl;
	return position;

};// end getPosition() method





/* ================== RACE CLASS METHODS =============================== */

/* Race class */
// Race(){};

class Race{
/* Data members 
private:
Horse[];
*/
private:
	//Horse horse[5];
	Horse horse[1];
public:
/*
public:
	int length;
Race(); null constructor
*/
	int *length;
	Race(){
		//cout << "Setted length (IN RACE CLASS!!):  " << length << endl;
		//cout << "Hello null Race() constructor" << endl;
		//cout << "Horses at memloc:  " << horse << endl;
		//Race::printLane(0);	
	};// end null constructor
	Race(int length){
		//cout << "Hello single-parameter Race() constructor" << endl;
		//cout << "Setted length (IN RACE CLASS!!):  " << horse[0].getPosition() << endl;
		length = length + horse[0].getPosition();
		cout << "Accumulated length --> " << length << endl;
		if (length <= TRACK){
			/* code */
			Race::printLane(horse[0].getPosition());
			
		}
		else{
			Race::printLane(horse[0].getPosition());
			keepGoing = FALSE;
			cout << "\t\tWINNER!" << endl;
			
		};// end if statement for break from loop
		
		
	};
	void printLane(int horseNum);
	void start();


};



/* ================== RACE METHODS =============================== */

void Race::printLane(int horseNum){
	//cout << "Race::printLane() method" << endl;
	for (int i = 0; i <= TRACK; ++i){
		if (i == horseNum){
			/* print horseNum */
			cout << horseNum;
		};
		/* print race track */
		cout << '.';
	};// end for loop iteration thru track size
	cout<< endl;

};// end printLane() method





void Race::start(){
	cout << "Hello Race.start() method" << endl;
};// end start() method



/* main function */
int main(int argc, char const *argv[])
{
	/* seed randomizer */
	srand(time(NULL));
	/* call to construct 5x null horses in race class */
	//Race race;
	//race.start();
	keepGoing = TRUE;
	while (keepGoing == TRUE)
	{
		/* code */
		Race(1);
		//keepGoing = FALSE;
	}

	

	
	//race.start();
	/* main function code */
	//cout << "Hello WOrld" << endl;
	return 0;
}































