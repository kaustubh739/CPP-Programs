#include<iostream>
using namespace std;

double Maximum(double No1, double No2)
{
    if(No1 > No2)
    {
        return No1;
    }
    else;
    {
        return No2;
    }
}

int main()
{
    double iValue1 = 10, iValue2 = 11,iRet = 0;

    iRet = Maximum(iValue1,iValue2);
    cout<<"Maximum :"<<iRet<<"\n";


    return 0;
}