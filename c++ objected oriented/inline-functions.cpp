/*************************************
C++ inline function is powerful concept that is commonly used with classes. 
If a function is inline, the compiler places a copy of the code of that function 
at each point where the function is called at compile time.

Any change to an inline function could require all clients of 
the function to be recompiled because compiler would need to replace
all the code once again otherwise it will continue with old functionality.

To inline a function, place the keyword inline before the function name and 
define the function before any calls are made to the function. The compiler 
can ignore the inline qualifier in case defined function is more than a line.

A function definition in a class definition is an inline function definition,
 even without the use of the inline specifier.

*******************************************/

#include <iostream>
 
using namespace std;

inline int Max(int x, int y) {
   return (x > y)? x : y;
}

// Main function for the program
int main() {
   cout << "Max (20,10): " << Max(20,10) << endl;
   cout << "Max (0,200): " << Max(0,200) << endl;
   cout << "Max (100,1010): " << Max(100,1010) << endl;
   
   return 0;
}