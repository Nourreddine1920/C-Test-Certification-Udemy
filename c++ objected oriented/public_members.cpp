/**********************
A public member is accessible from anywhere outside the class but within a program. 
You can set and get the value of public variables without any member function 
************************/

#include <iostream>
 
using namespace std;
 
class Line {
   public: // make member public so they can be access outside the class 
      double length;
      void setLength( double len );
      double getLength( void );
};
 
// Member functions definitions using  scope resolution operator
double Line::getLength(void) {
   return length ;
}
 
void Line::setLength( double len) {
   length = len;
}
 
// Main function for the program
int main() {
   Line line; // object form the class Line 
 
   // set line length
   line.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;
 
   // set line length without member function
   line.length = 10.0; // OK: because length is public
   cout << "Length of line : " << line.length <<endl;
   
   return 0;
}

