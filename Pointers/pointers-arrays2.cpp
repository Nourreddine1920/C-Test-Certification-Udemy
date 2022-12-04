#include<iostream>


using namespace std ;

void printArr(int *ptr) ; 
const int MAX = 5 ;

int main(){
   int arr[MAX] = {1 , 2 , 3 , 4 , 5 } ; 
   printArr(arr) ; 
    
}
void printArr(int *ptr) {
    for (int i = 0; i < MAX; i++)
    {
        cout << *ptr++ << endl ; 
    }
    
}
