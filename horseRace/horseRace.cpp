#include <iostream>
#include <string>
#define MAX 10
using namespace std;

/*1. Created the horses with horse 
constructor INSIDE RACE object */


/* Function Prototypes */
void printLane();
void Race();
void advance();
int getPosition();
void Horse();

struct horse{
	int position;
	int horseNum;
};

struct race{
	//int length;
};


void printLane(){
	for(int i = 0; i < MAX; ++i) {
	    /* print track */
	    //int track[i];
	    cout << "[ " << i << " ]";
	}
};


void advance(){
	cout << "advance() here" << endl;
};


int getPosition(int &position){
	position++;
	printf("New Position:\t%i\n", position);
	return 0;
};

void Horse(){
	int Horse[] = {100, 102};
	horse self;
    self.position = 0;// give it a day
    self.horseNum = Horse[0];// give it a month

    cout << "Horse Number:\t" << self.horseNum
    << "\nPosition:\t" << self.position << endl;
    advance();
    getPosition(self.position);
    
};

void Race(){
	race self;

	//printf("%i", self.length);
	cout << "Race() here" << endl;
	printLane();
};


int main(){
	/* a structure is what classes are
	the idea of classes */

	Horse();
	Race();

    printf("\n");
} // end main