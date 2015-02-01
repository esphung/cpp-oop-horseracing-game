#include <stdio.h>
#include <string.h>

#define MAX 9




int init_position = 100;

int lane[10] = {0,1,2,3,4,5,6,7,8,9};


struct horse{
   int *name;
   int *position;
};  



void raceLength(){
	/* print out track */
	for (int i = 0; i < MAX; ++i){
		lane[0] = init_position;

		
		printf("[ ");
		printf("%i", lane[i]);
		printf(" ]");
	}// end for loop
	printf("\n");

};// end print out of track race()


int main(int argc, char const *argv[]){
	/* main code */

	/* declare structures */
	struct horse horse001;
	//struct horse horse002;
	//struct horse horse002;


	for (int i = 0; i < MAX; ++i){
		/* define self.structure */
		horse001.name = &init_position;
		//horse002.name = &init_position;
		/* call to print track */
		raceLength();
	}

	

	



	printf("\n\tHello World\n");
	return 0;
}