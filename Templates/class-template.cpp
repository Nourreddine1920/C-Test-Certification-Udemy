#include <iostream>
#include <string>
using namespace std;


template<class T>
class sum
{
private:
	T x;
	T y;
public:
	sum(T arg1, T arg2)
	{
		x = arg1;
		y = arg2;
	}
	void getSum()
	{
		cout << x + y << endl;
	}
};

int main()
{
	sum<int> obj1(2,3);
	sum<float> obj2(2.0f, 3.0f);
	sum<string> obj3("Vedinesh ", "Academy");
	
	obj1.getSum();
	obj2.getSum();
	obj3.getSum();
	return 0;
}