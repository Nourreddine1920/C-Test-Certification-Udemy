#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
int t[] ={ 3, 4, 2, 1, 6, 5, 7, 9, 8, 0 };
vector<int>v(t, t+10);
set<int> s1(v.begin(),v.end());
s1.insert(v.begin(),v.end());
int found = s1.find(7);
if (found){
cout<<"Element found!\n";
}else {
cout<<"Element not found!\n";
}
return 0;
}