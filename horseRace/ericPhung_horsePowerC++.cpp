/* g++ -std=c++0x ericPhung_horsePowerC++.cpp -o your_program */

/* Horse Race game in c++ using UML diagram */
//	AUTHOR:			Eric Scott Phung
//	CREATED:		2014.02.12 (esp)
//	PURPOSE:		Horse Race created in c++


#include <iostream>
#include <cstdlib>
#include <ctime>
//#include <string>
#include <cstring>
//#include <random>

/* declare boolean values */
#define TRUE 1
#define FALSE 0

/* define constants */
#define TRACK 20
#define MAX 5

/* declare namespace */
using namespace std;



/* function prototypes */
void advance();
int getPosition();
void printLane(int horseNum, int name);
void start();

/* declare sentry variable */
int keepGoing;
int passes;
int name[] = {1,2,3,4,5};
/* ================== HORSE CLASS =============================== */

class Horse{
/* private data members */
private:
	/* declare position as private integer */
	int position;
/* public data members */
public:
	/* null horse constructor */
	Horse(){
		Horse::position = 0;
		Horse::advance();
		Horse::getPosition();	
	};
	/* declare Horse class methods inside class */
	void advance();
	int getPosition();
	int setPosition();
};// end Horse class

/* ================== HORSE class METHODS =============================== */

/* define HOrse class advance method */
void Horse::advance(){
	/* method to flip coin */
	int coinFlip = rand() %2 +1;
	/* assert side coin landed on */
	if (coinFlip == 2){
		/* if Heads (not Tails), then advance */
		//cout << position << endl;
		position = position + 1;
	}// end if statement for coin flip
};// end advance() method
/* define horse class getposition method */
int Horse::getPosition(){
	/* return each horse objects position
	outside of horse class */
	return position;

};// end getPosition() method




/* ================== RACE CLASS =============================== */

/* Race class */
// Race(){};

class Race{
/* private data members */
private:
	/* instantiate array of horse objects */
	Horse horse[5];
	
/* public data members */
public:
	/* declare length as public integer */
	int length;
	/* null race constructor */
	Race(){
	};// end null constructor
	/* single parameter race constructor */
	Race(int length){
		for (int i = 0; i < MAX; ++i){
			/* code */
			//cout << horse[i].getPosition() << endl;
			horse[i].advance();
			length = horse[i].getPosition();
			Race::printLane(length, name[i]);
		}
		
		/* update length for each horse object returned */
		//length = length + horse[0].getPosition();
		/* if statement to loop thru printlane method for each horse */
		if (length <= TRACK){
			cout << "======================" << endl;
			
		}
		else{
			/* catch-all end while loop */
			keepGoing = FALSE;
		};

		
	};
	/* declare methods of the horse class */
	void printLane(int horseNum, int name);
	void start();


};



/* ================== RACE class METHODS =============================== */

/* print each horse's lane */
void Race::printLane(int length, int name){
	/* for loop to print out track */
	for (int i = 0; i <= TRACK; ++i){
		if (i == length){
			/* print horseName */
			cout << name;
		};
		/* if statement to break loop if a horse reaches the end of track */
		if (length == TRACK)
		{
			/* code */
			keepGoing = FALSE;
			cout << "\n\t\tWINNER!" << endl;
			cout << "\t\t" << name << "!" << endl;
			//cout << name[j] << endl;
			i = TRACK;
			return;
		};
		/* print race track */
		cout << '.';
	};// end for loop iteration thru track size
	/* endline for each track completed */
	cout << endl;

};// end printLane() method




/* start method of horse class */
void Race::start(){
	/* unused method */
	//cout << "Hello Race.start() method" << endl;

	while (passes < 20){
		/* code */
		Race(1);
		//cout << MAX;
		cin.ignore();// prompt user for each pass
		passes = passes +1;
	}
	
};// end start() method



/* main function */
int main(){
	/* seed randomizer */
	srand( (time(NULL)));
	/* call to construct 5x null horses in race class */
	Race race;
	race.start();

	return 0;
}































