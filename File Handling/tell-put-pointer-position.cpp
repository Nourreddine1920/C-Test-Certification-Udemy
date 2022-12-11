#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("my.txt", ios::app); // open the file in append mode 

	int pos = 0;
	pos = fout.tellp();

	cout << "Put pointer :" << pos << endl; //  the current “put” position of the pointer in the stream ====> 0

	fout << "Academy";

	pos = fout.tellp();

	cout << "Put pointer :" << pos; //  the current “put” position of the pointer in the stream ====> 7

	fout.close();

}