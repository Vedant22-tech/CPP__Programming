//Access Specifies is not declared by default it will take private
#include<iostream>
using namespace std;

//Encapsulation
class Marvellous
{
    //Access Specifier  (By Default Private)
    int No1, No2;  //Characteristics

    void Fun()
    {
        cout<<"Inside Fun\n";  //Behaviour
    }

    void Gun()    //Behaviour
    {
        cout<<"Inside Gun\n";
    }


};

int main()
{
    // Object creation (Instance)
    Marvellous mobj1;
    Marvellous mobj2;

    cout<<sizeof(mobj1)<<"\n";  //8

    cout<<mobj1.No1<<"\n";

    mobj1.Fun();
    mobj2.Fun();

    mobj1.Gun();




    return 0;
}