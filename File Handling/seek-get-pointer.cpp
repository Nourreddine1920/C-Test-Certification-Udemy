#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream fin;
	char A[10];

	fin.open("my.txt");

	for (int i = 0; i < 10; i++)
	{
		A[i] = 0;
	}
	
	fin.seekg(-1, ios_base::end); // seekg() is used to move the get pointer to a desired location with respect to a reference point.


	fin.read(A, 1);

	for (int i = 0; A[i]!=0; i++)
	{
		cout << "the caracters are : " << A[i] << endl ; 
	}

	fin.close();
	return 0;
}