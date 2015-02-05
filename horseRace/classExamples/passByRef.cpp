#include <iostream>

using namespace std;

/* this will change the actual value */
/* inside this function alpha is referred to as beta */
void addOne(int beta){
  beta++;
  //cout << "Beta inside addOne()" << beta << endl;
} // end addOne

/* Reference of 'beta' with '&beta' */
/* this function wont actually change the value of int alpha */
void addOneByRef(int &beta){
  beta++;
  //cout << "Beta inside addOneByRef()" << beta << endl;
} // end addOneByRef

int main(){

  int alpha = 5;
  addOne(alpha);
  cout << "after addOne, alpha is " << alpha << endl;


  addOneByRef(alpha);
  cout << "after passing reference, alpha is " << alpha << endl;

} // end main
  
