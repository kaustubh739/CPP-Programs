#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
};

    void fun()
    {
        cout<<"Inside base fun\n";
    };

class Derived : public Base
{
    public:
        int x;

        void gun()
        {
            cout<<"Inside Derived gun\n";
        }
};
int main()
{
    Base bobj;

    Derived bobj;

    cout<<"size of base class object: "<<sizeof(bobj)<<"\n";

    cout<<"size of base class object: "<<sizeof(dobj)<<"\n";

    //cout<<"size of base class object: "<<sizeof(bobj)<<"\n";

    return 0;
}