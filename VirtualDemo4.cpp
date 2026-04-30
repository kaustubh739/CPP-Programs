#include<iostream>
using namespace std;

class 

int main()
{
    cout<<sizeof(Base)<<"\n";   //16
    cout<<sizeof(Derived)<<"\n" // 20

    Base *bp = new Derived();   //Upcasting

    /*bp -> fun(); // Base fun
    bp -> gun(); // Base gun
    bp -> sun(); // Base sun
    //bp -> run(); // error
    //bp -> mun(); // error
    bp -> bun(); // base bun
*/
    return 0;
}