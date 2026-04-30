//error

#include<iostream>
using namespace std;

class Base
{
    public://ch - 3
        int i;

    private:
        int j;
    
    protected:
        int k;

    public:
    Base()// beha - 2
    {
        i = 10; j = 20; k = 30;

    }
    public:
        void fun()//12
        {
            cout<<i<<"\n"; // Allowed
            cout<<j<<"\n"; //Allowed
            cout<<k<<"\n"; // Allowed
        }
};
   
class Derived : public Base //16
{
    public:
    int x;
        void Display()
        {
            cout<<i<<"\n";//allowed
            cout<<j<<"\n";//error
            cout<<k<<"\n";// allowed
        }
};
int main()
{
    Base bobj;

    Derived bobj;

    cout<<bobj.i<<"\n"; //allowed
    cout<<bobj.j<<"\n"; // error
    cout<<bobj.k<<"\n"; //error

    cout<<dobj.i<<"\n"; // allowed
    cout<<dobj.j<<"\n"; //error
    cout<<dobj.k<<"\n"; //error

    dobj.fun(); //allowed
    dobj.Display();//allowed
    return 0;
}