#include <iostream>

using namespace std ; 


class Alpha
{
private:
int a1;
public:
Alpha( int arg = 0)
{ a1 = arg; }
friend class Beta;
}; 


class Beta
{
private:
int b1;
public:
Beta( int arg = 0)
{ b1 = arg; }
void Sum( )
{
Alpha alpha_obj (3);
int sum = alpha_obj.a1 + b1;
cout << "Sum : " << sum << endl ; 
}
};



int main( )
{
Beta beta_obj(7);
beta_obj.Sum( );
}