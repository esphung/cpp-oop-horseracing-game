/* Horse Race game in c++ using UML diagram */
//	AUTHOR:			Eric Scott Phung
//	CREATED:		2014.02.12 (esp)
//	PURPOSE:		Horse Race created in c++

/* standard libraries */
#include <iostream>
#include <string>
#include <random>

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
void printLane(int position, int name);
void start();

/* declare sentry variable */
int keepGoing;
int name[] = {1,2,3,4,5};

/* ================== HORSE CLASS =============================== */

class Horse{
/* private data members */
private:
	/* declare position as private integer */
	int position;
	//int position = 0;
/* public data members */
public:
	/* null horse constructor */
	Horse(){
		//Horse::advance();
		Horse::getPosition();
	};
	/* declare Horse class methods inside class */
	//void advance();
	int getPosition();
	int setPosition();
};// end Horse class

/* ================== HORSE class METHODS =============================== */

/* define HOrse class advance method */
int advance(int position){
	/* method to flip coin */
	int coinFlip = rand() %2 +1;
	/* assert side coin landed on */
	if (coinFlip == 1){
		/* if Heads (not Tails), then advance */
		position = position+1;
	}// end if statement for coin flip
	//cout << position << endl;
	return position;
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
	Horse race[5];
	
/* public data members */
public:
	/* declare length as public integer */
	int length;
	/* null race constructor */
	Race(){
	};// end null constructor
	/* single parameter race constructor */
	Race(int length){
		/* update length for each horse object returned */
		//length = length + horse[0].getPosition();
		/* if statement to loop thru printlane method for each horse */


		
	};
	/* declare methods of the horse class */
	void printLane(int position, int name);
	void start();


};



/* ================== RACE class METHODS =============================== */

/* print each horse's lane */
void Race::printLane(int length, int name){
	/* for loop to print out track */
	for (int i = 0; i <= TRACK && keepGoing == TRUE; ++i){
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
			//i = TRACK;
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
};// end start() method



/* main function */
int main(){
	/* seed randomizer */
	srand(time(NULL));
	int position = 0;
	int length = 0;
	/* call to construct 5x null horses in race class */
	Race race;
	for (int i = 0; i < 5; ++i)
	{
		/* code */
		//race.length = 0;
		race.length = length;
		race.printLane(position,name[i]);
		
	}
	
	//race.start();
	//show starting positions
	//race.printLane(0,name[0]);
	//Race(1);
	
	keepGoing = TRUE;
	while (keepGoing == TRUE){
		
		/* main loop for program */
		//Race(1);
		// constant advancing of the horses
		//advance(position);
		//cout << position << endl;
		//cout << advance(position) << endl;
		
		//getPosition();
		// constant printing of lanes
		for (int i = 0; i < 1; ++i){
			//position = 0;
			/* print out each horse position on track */
			//position = getPosition();
			race.length = race.length + advance(position);
			//length = race.length + advance(position);
			cout << "Race.length: " << race.length << endl;
			//position = getPosition();

			//position = 0;
			race.printLane(race.length,name[0]);
			length = 0;
			
			//position = advance(position);
			cout << name[0] << " Position: " << advance(position) << endl;
			
		}

		for (int i = 0; i < 1; ++i){
			//position = 0;
			/* print out each horse position on track */
			//position = getPosition();
			race.length = race.length + advance(position);
			//length = race.length + advance(position);
			cout << "Race.length: " << race.length << endl;
			//position = getPosition();

			//position = 0;
			race.printLane(race.length,name[1]);
			length = 0;
			
			//position = advance(position);
			cout << name[1] << " Position: " << advance(position) << endl;
			
		}

		//Race();
		
		cin.ignore();// prompt user for each pass
	}// end main while loop
	/* main function code */


	return 0;
}































