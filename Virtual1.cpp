#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;

        void Fun()  //  1000
        {
            cout<<"Inside Fun of Base\n";
        }
        void Gun()  //  2000
        {
            cout<<"Inside Gun of Base\n";
        }
        void Sun()  //  3000
        {
            cout<<"Inside Sun of Base\n";
        }
};


class Derived : public Base
{
    public:
        int X,Y;

        void Fun()  //  4000
        {
            cout<<"Inside Fun of Derived\n";
        }
        void Gun()  //  5000
        {
            cout<<"Inside Gun of Derived\n";
        }
        void Sun()  //  6000
        {
            cout<<"Inside Sun of Derived\n";
        }


};


int main()
{
    /*
    Derived dobj;

    dobj.Fun();
    dobj.Gun();
    dobj.Sun();
*/

    cout<<"Size of Base : "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";
    
    Base *bp = new Base;            // No casting
    Derived *dp = new Derived;      // No casting

    Base *bp1 =new Derived;         //Up casting    (Allowed)
    Derived *dp1 = new Base;        //Down Casting   (Not Allowed)


    return 0;
}