//typedef.cpp

//makes an alias for an existing type
//does NOT create a new type.
//sometimes used for clarity

#include <iostream>
using namespace std;

typedef int INT;

typedef struct {
    int p;
    char *q;
} S;  //  This struct is now called S

main() {
  // now I can use INT and S as if they were native types
  INT i = 5;
  S thingie;
  thingie.p = i;
  thingie.q = "oog";
} // end main





