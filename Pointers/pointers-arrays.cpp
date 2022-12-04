#include<iostream>


using namespace std ;


int main(){
    int arr[5] ={12 , 15 , 458 , 21 , 65 };
    int *ptr=arr; // &arr[0]
    cout << *ptr << endl ;
    for (int i = 0; i < 5; i++)
    {
        /* code */
         cout << "Value of  " << i  <<" is : " << *(ptr + i) << endl ; 
    }
    
}