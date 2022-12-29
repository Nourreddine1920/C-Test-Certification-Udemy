#include<iostream>
#include<array>   // Include the array header
using namespace std;

int main()
{
//array declaration
	std::array<int, 3> testArray1 = {10 , 5};

//array intialization
	std::array<int, 3> testArray2 = { 10,20,30 };

    std::array<int, 3> a;

//methods
	cout << "At :" << testArray2.at(2) << endl;		//out of bound safe

	cout << "[2] :" << testArray2[2] << endl;			//unsafe

	cout << "front() :" << testArray2.front() << endl;  //  return 1st element

	cout << "back() :" << testArray2.back() << endl;  // return last element 

	testArray1.fill(0) ; // fill array with 0




	testArray1.swap(testArray2);					// swap arrays

	testArray1.empty();  							// empty the array

	cout << "size() :" << testArray2.size() << endl;  // size of array filled

	cout << "max_size() : " << testArray2.max_size() << endl; // max size of array

	return 0;
}