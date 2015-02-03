#include <iostream>
#include <string>

#define MAX 10

using namespace std;


void printLane(){
	for(int i = 0; i < MAX; ++i) {
	    /* print track */
	    int track[i];
	    track[i] = cout << "[ " << i << " ]";
	}
};


struct horse{
	int position;
	int horseNum;
};

struct race{
	int length;
};


void Race(){
	cout << "Race() here" << endl;
	race self;
	self.length = 10;
	//printf("%i", self.length);
	printLane();
};



void advance(){
	cout << "advance() here" << endl;
};


int getPosition(int position){
	position++;
	printf("New Position:\t%i\n", position);
	return 0;
};

void Horse(){
	horse self;
    self.position = 0;// give it a day
    self.horseNum = 0;// give it a month

    cout << "Horse Number:\t" << self.horseNum
    << "\nPosition:\t" << self.position << endl;
    advance();
    getPosition(self.position);
    
};



int main(){
	/* a structure is what classes are
	the idea of classes */

	Horse();
	Race();


	
	
    printf("\n");
} // end main