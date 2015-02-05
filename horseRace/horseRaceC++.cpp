#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <random>
#define MAX 20
#define TRUE 1
#define FALSE 0

using namespace std;

/* function prototypes */
void advance();
int getPosition();
void printLane();
int length();
//void start();
void menu();
void chances();

int position = 0;
char track = '.';
int perc_chance;
int passes;

/* Horse class for creating horse objects */
class Horse{
public:
	Horse(){
		chances();// 50/50 chance determined in this function
		//cout << perc_chance << endl;
		advance();// advance each horse per chance
		getPosition();// return the new position to global scope
	};
	/* Class methods of Horse class */
	void advance(){
		//position = position+1;
		if (perc_chance == 2){
			position = (position + 1);
			passes = passes + 1;
			//getPosition();
		}// end if statement for chance advance
	};
	int getPosition(){
		cout << "\nPosition = " << position << endl;
		return position;
	};
	void chances(){
		
		perc_chance = rand() %2 +1;
		cout << "Chance: " << perc_chance;
	};
};// end Horse class

class Race{
public:
	Race(){
		Horse();
		printLane("0");/* arbitrary horse name */
	};// end of Race.Race(self.Horse())
	/* Class methods of Race class */
	void length(){
		for (int i = 0; i < (MAX-position); ++i){
			cout << track;
		}
		cout << endl;
	};
	void printLane(string name){
		for (int i = 0; i < position; ++i){
			cout << track;
		}
		cout << name;
		length();
	};// end printLane()
};// end Race Class




int main(){
	srand(time(NULL));

	while (passes < MAX){
				Race object[1];
				cout << "=======================" << endl;
			cin.ignore();// prompt for each while pass
		}// end while loop
	

	return 0;
}