/**********************
When creating a class, instead of writing completely new data members
 and member functions, the programmer can designate that the new class
  should inherit the members of an existing class. 
This existing class is called the base class, and the new class 
is referred to as the derived class.

***********************/

#include<iostream>

using namespace std;


// Base class 
class Shape {
    public :
        void setWidth(int w){
            width = w;
        }
        void setHeight(int h){
            height = h;
        }
        protected : 
            int width;
            int height;
};

// Derived class 
class Rectangle : public Shape{
    public : 
        int getArea(){
            return height * width ; 
        }
};

int main (){
    Rectangle Rect ; 
    Rect.setWidth(5);
    Rect.setHeight(10);
    // print area of the rectangle 
    cout << "total area is : " << Rect.getArea() << endl;

    return 0;


}