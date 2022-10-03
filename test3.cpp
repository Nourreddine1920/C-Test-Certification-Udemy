#include <deque>
#include <list>
#include <iostream>
using namespace std;
int main ()
{
list<int>l1;
deque<int>d1;
for(int i=0; i<5; i++)
{
l1.push_back(i);l1.push_front(i);
d1.push_back(i);d1.push_front(i);
}
for(int i=0; i<d1.size(); i++)
{
cout<<d1[i]<<" "<<l1[i]<<" ";
}
cout<<endl;
return 0;
}