#include<iostream>

using namespace std ;

class person
{
    public:
        virtual void give( ){
            cout <<"Bun " << endl;
}
};
class boy: public person
{
    public:
        void give( ){
            cout << "Brown Bun " << endl ;
}
};

class girl: public person
{
public:
void give( )
{
cout << "Pink Bun " << endl;
}
};

int main(){
    boy b1;
    girl g1;
    person *ptr = NULL;
    ptr = &b1;
    ptr->give();
    ptr = &g1;
    ptr->give();
    return 0;


}