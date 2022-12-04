#include<iostream>


using namespace std ;


int main(){
    int number = 9;
    int* ptr;
    ptr = &number;
    cout << *ptr << endl ; 
    cout << ptr << endl ; 
}