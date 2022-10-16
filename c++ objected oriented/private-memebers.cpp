/********************************

A private member variable or function cannot be accessed, or even viewed from outside the class.
Only the class and friend functions can access private members 

********************************/


#include <iostream>
 
using namespace std;
 
class Box {
   public:
      double length;
      void setWidth( double wid );
      double getWidth( void );
 
   private: // private member that can't be acceded outside the class
      double width;
};
 
// Member functions definitions
double Box::getWidth(void) {
   return width ;
}
 
void Box::setWidth( double wid ) { // member function using the private memeber 
                                   //so that they can be called from outside of the class
    width = wid;
}
 
// Main function for the program
int main() {
   Box box;
 
   // set box length without member function
   box.length = 10.0; // OK: because length is public
   cout << "Length of box : " << box.length <<endl;
 
   // set box width without member function
   //box.width = 10.0; // Error: because width is private
   box.setWidth(10.0);  // Use member function to set it.
   cout << "Width of box : " << box.getWidth() <<endl;
 
   return 0;
}
