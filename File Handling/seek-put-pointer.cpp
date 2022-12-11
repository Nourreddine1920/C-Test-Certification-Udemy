#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout;
	char A[8] = "Academy";

	fout.open("my.txt",ios::in);

	
	
	fout.seekp(3, ios_base::beg); // seekp() is used to move the put pointer to a desired location with respect to a reference point.


	fout.write(A,8);


	fout.close();
	return 0;
}
