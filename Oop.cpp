# include<iostream> //encap
using namespace std;

class Arithematic
{
    public: //abstr
        int iNo1;//characteristics
        int iNo2;

        Arithematic() //poly default
        {
            int No1 = 0;
            int No2 = 0;
        }
        Arithematic(int A,int B) //parameterized 11 10
        {
            iNo1 = A;
            iNo2 = B;
        }

        int Addition()//function
        {
            int iAns = 0;
            iAns = iNo1 + iNo2;
            return iAns;
        }

        int Substraction()//function
        {
            int iAns = 0;
            iAns = iNo1 - iNo2;
            return iAns;
        }

};
int main()
{
    Arithematic aobj1(11,10); //object

    int iRet = 0;

    iRet = aobj1.Addition();
    cout<<"Addition is :"<<iRet<<"\n";

    iRet = aobj1.Substraction();
    cout<<"Substraction is :"<<iRet<<"\n";

    return 0;
}