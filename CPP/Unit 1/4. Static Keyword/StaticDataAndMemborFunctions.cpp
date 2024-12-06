// Static Data and Member Functions

#include <iostream>
using namespace std;
class MyClass
{
    int a;
    static int b;
    public:
    MyClass(int x,int y)
    {
        a=x,b=y;
    }
    void display()
    {
        cout<<"A: "<<a<<"\t\t"<<"B: "<<b<<endl<<endl;
    }
    static void StaticDisplay()
    {
        cout<<"B: "<<b<<endl<<endl;
    }
};
int MyClass::b=0;
int main()
{
    MyClass obj1(10,20);
    obj1.display();
    MyClass::StaticDisplay();
    MyClass obj2(10,50);
    obj2.display();
    MyClass::StaticDisplay();
    obj1.display();
    return 0;
}

// O/p: A: 10           B: 20
//      
//      B: 20
//      
//      A: 10           B: 50
//      
//      B: 50
//      
//      A: 10           B: 50
//      