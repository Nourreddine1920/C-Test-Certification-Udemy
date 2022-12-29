#include<iostream>
#include<queue>   // Include the Queue header

using namespace std;

int main()
{
	//declaration
	queue <int> queue1;

	//push value
	queue1.push(10);
	queue1.push(20);
	queue1.push(30);

	//10,20,30
	//front  = 10
	cout << endl << "front element :-" << queue1.front();

	//back
	cout << endl << "Back element :-" << queue1.back();

	//pop
	queue1.pop();
	cout << endl << "New front element :-" << queue1.front();

	//size: no of element present in queue
	cout << endl << "No. Of element:- " << queue1.size();
	return 0;
}