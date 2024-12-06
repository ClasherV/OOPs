// Static Data Member with Constructor and Destructor

#include <iostream>
using namespace std;
class MyClass
{
    static int count;
    public:
    MyClass()
    {
        count++;
        cout<<"Constructor Called\n";
        cout<<"Count: "<<count<<endl;
    }
    ~MyClass()
    {
        count--;
        cout<<"Destructor Called\n";
        cout<<"Count: "<<count<<endl;
    }
    static int getCount()
    {
        return count;
    }
};
int MyClass::count=0;
int main()
{
    MyClass obj1;
    MyClass obj2;
    cout<<"Final Count: "<<MyClass::getCount()<<endl;
    return 0;
}

// O/p: Constructor Called
//      Count: 1
//      Constructor Called
//      Count: 2
//      Final Count: 2    
//      Destructor Called
//      Count: 1
//      Destructor Called
//      Count: 0