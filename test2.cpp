#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
void myfunction(int i) {
cout << " " << i;
}
bool classifier(int v) {
return v%2==0;
}
int main() {
int t[] = { 1, 5, 2, 5, 2, 4, 4, 3, 3, 1 };
vector<int> v1(t, t+10);
set<int> s1(t, t+10);
replace(v1.begin(), v1.end(),classifier, 10);
for_each(v1.begin(), v1.end(), myfunction);
return 0;
}