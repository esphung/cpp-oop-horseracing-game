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
int lowLimit = 1;
int highLimit = 3;
int perc_chance;
int passes;

string horseNameSet[] = {"A","B","C","D","E","F","G","H","I","J"};

//string strGo ("go");// str cmd to win
//std::string strQuit ("quit");// str cmd to quit
//std::string strReady ("ready");// for ready
/*
default_random_engine generator;
uniform_int_distribution <int> distribution(0,2);
int coin_flip = distribution(generator);  // generates number in the range 1..2
*/

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
		if (perc_chance == 1)
		{
			/* code */
		}
		else if (perc_chance == 2)
		{
			position = position + 1;
			passes = passes + 1;
		}
	};
	int getPosition(){
		return position;
	};
	void chances(){
	perc_chance = (lowLimit + (rand() %(highLimit - lowLimit)));
	//cout << perc_chance << endl;

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
		/*
		for (int i = 0; i < MAX; ++i){
			stats();
			Race object;
			cin.ignore();
		}*/

		while (passes < 1){
			
			for (int i = 0; i < 1; ++i)
			{
				/* code */
				Race object;
				object.printLane(horseNameSet[i],position);
				//position = 0;
			}

			
			//object.printLane(horseNameSet[1],position);

			
			//objectB.printLane(horseNameSet[0], position);
			//stats();
			cin.ignore();
			//passes = passes + 1;
		}
		
		//getline(cin, userReady);
		//cin >> userInput;
		/*
		if (userInput.compare(strGo) == 0){
			Race object;
			keepGoing = FALSE;
		}*/
		//strGo = "^[[C"
};// end start()

void menu(){
	cout << "Menu:\t\tGoes\t\tHere\t\t!!!" << endl;

};// end menu()






int main()
{
	//menu();
	start();
	

	return 0;
}