//basicClass.cpp

#include <iostream>
#include <string>

using namespace std;

class Student{
    private:
        string name;// a property should be private
    public:
    	// constructor
 		/* methods should be public */
 		/* first constructor "null parameter constructor" */
    	Student(){
    		name = "Anonymous";
    	}// end constructor (diff from other methods)
    	// this is first function method ran whne called
    	// should contain at least 5x initial values

    /* second constructor case of predetermined values;
    "single parameter constructor" */
    	Student(string tName){
    		name = tName;
    	} // end overloaded constructor

    	void setName(string tName){
    		name = tName;
    	} // end setName

    	string getName(){
    		return name;
    	} // end getName
}; // end class def
//don't forget semicolon at end of class def!

int main(){
    Student s1;
    cout << s1.getName() << endl;
    s1.setName("John");
    cout << "Name: " << s1.getName() << endl;


    Student s2("Hepzibah");
    cout << s2.getName() << endl;

} // end main