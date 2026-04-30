#include<iostream>
using namespace std;

int main()
{
    int length = 0;
    int *Arr = NULL;

    cout<<"Enter the number of elements";

    cin>>length;
    // Allocate the memory
    Arr = new int[length];
    if(Arr == NULL)
    {
        cout<<"Unable to allocate the memory\n";
    }
    else
    {
        cout<<"Memory gets sucessfully allocated\n";
    }

    //step 2: USe the memory
    
    // Step 3: Deallocate the memory
    delete [] Arr;

    return 0;
}