#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <random>
#define MAX 10
#define TRUE 1
#define FALSE 0

using namespace std;

/* function prototypes */
void advance();
int getPosition();
void printLane();
int length();
void start();
void menu();
void chances();

int position = 0;
char track = '.';
int keepGoing;

//string userInput;
int lowLimit = 2;
int highLimit = 1;
int perc_chance;
int passes;

string horseNameSet[] = {"A","B","C","D","E","F","G","H","I","J"};


/* Horse class for creating horse objects */
class Horse{
public:
	Horse(){
		chances();// 50/50 chance determined in this function
		//cout << perc_chance << endl;
		advance();// advance each horse per chance
		//getPosition();// return the new position to global scope
	};
	/* Class methods of Horse class */

	void advance(){
		//position = position+1;
		if (perc_chance == 2){
			position = position + 1;
			passes = passes + 1;
			getPosition();
		}// end if statement for chance advance
	};
	int getPosition(){
		return position;
	};
	void chances(){
		
		perc_chance = rand() %2 +1;
		cout << perc_chance << endl;

	};
	
};// end Horse class



class Race{
public:
	Race(){
		Horse();
	};// end of Race()
	/* Class methods of Race class */
	void length(){
		for (int i = 0; i < (MAX-position); ++i){
			cout << "\t" << track;

		}
		cout << endl;
	};
	void printLane(string name, int position){

		for (int i = 0; i < position; ++i){
			cout << "\t" << track;

		}
		cout << name;
		length();
	};// end printLane()
};// end Race Class

void stats(){
	//cin.ignore();
	cout << "Stats:\t" << endl;

};// end stats()


void start(){
		while (passes < MAX){
			for (int i = 0; i < 1; ++i){
				/* code */

				Race object;
				object.printLane("alpha",position);
				object.printLane("beta",position);
				object.printLane("romeo",position);
			}// end for iteration
			
			cin.ignore();// prompt for each while pass
		}// end while loop
		
};// end start()

void menu(){
	cout << "Menu:\t\tGoes\t\tHere\t\t!!!" << endl;

};// end menu()






int main()
{
	//menu();
	srand(time(NULL));
	start();
	

	return 0;
}