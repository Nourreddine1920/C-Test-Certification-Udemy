/**************************
A C++ class can inherit members from more than one class and here is the extended syntax 
***************************/

#include<iostream>

using namespace std ;

class Shape {
    public:
        void setWidth(int w){
            width = w  ; 

        }
        void setHeight(int h){
            height = h;
        }
    protected:
        int height;
        int width;
};

class PaintCost{
    public:
        int getCost(int area){
            return area * 70;
        }
};

class Rectangle : public Shape , public PaintCost{
    public:
        int getArea(){
            return width*height;
        }
};

int main(){
    Rectangle rect;
    int area;
    rect.setHeight(10);
    rect.setWidth(40);
    area = rect.getArea();
    cout << "Total area :" << area << endl;
    cout << "Total cost : " << rect.getCost(area) << endl;

    return 0;
}
