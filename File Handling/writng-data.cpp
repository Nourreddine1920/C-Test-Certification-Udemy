#include<iostream>
#include <fstream>


using namespace std ; 


int main (){
    ofstream fout; // stream creation  
    fout.open("my.txt"); // load file in RAM 
    fout << "Noureddine \n"; // writing data into file 
    fout << "an embedded systems engineering student ! \n"; // writing data into file 

    fout.close(); //closing the file 

}