#include<iostream>
using namespace std;

//Encapsulation
class Marvellous
{
    //Access Specifier
    public:
    int No1, No2;  //Characteristics

    // Default Constructor
    Marvellous()
    {
        cout<<"Inside deafault Constructor\n";
        No1 = 0;
        No2 = 0;

    }

    // Parameterised Constructor
     Marvellous(int A, int B)
    {
        cout<<"Inside Parameterised Constructor\n";
        No1 = A;
        No2 = B;

    }

    // Copy Constructor
    Marvellous(Marvellous &ref)
    {
        cout<<"Inside Copy Constructor\n";
        No1 = ref.No1;
        No2 = ref.No2;
    }
    
    // Destructor
    ~Marvellous()
    {
        cout<<"Inside Destructor\n";
    }

};

int main()
{
    cout<<"Inside main\n";

    Marvellous mobj1;        // Default constructor
    Marvellous mobj2(11,21);   // Parametrised constructor
    Marvellous mobj3(mobj2);   // Copy Constructor

    cout<<"End of main\n";
    return 0;
}   // All Destructors gets called