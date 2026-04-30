#include<iostream>
using namespace std;

#pragma pack(1)
class Base:
{
    public:
        int i, j;
        int Addition(int a, int b) //concrete
        {
            return a+b;
        }
        int Substraction(int a, int b) = 0  //concrete
};

#pragma pack(1)

class Derived : Base
int main()
{
    return 0;
}