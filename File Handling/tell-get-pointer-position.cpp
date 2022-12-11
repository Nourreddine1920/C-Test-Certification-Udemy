#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream fin;
	char ch;

	fin.open("my.txt");

	int pos = 0;
	pos = fin.tellg(); // the current position of the get stream pointer
	
	cout << "Pos : " << pos << endl;

	fin >> ch;

	pos = fin.tellg();  //the current position of the get stream pointer

	cout << "Pos : " << pos << endl;
    fin >> ch;


	fin.close();

}