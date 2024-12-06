// Copy Constructor

#include <iostream>
using namespace std;
class MyClass
{
    int a,b;
    public:
    MyClass(int x,int y)
    {
        a=x,b=y;
        cout<<"Constructor Called\n";
    }
    MyClass(MyClass &ref)
    {
        a=ref.a;
        b=ref.b;
        cout<<"Constructor Called\n";
    }
    ~MyClass()
    {
        cout<<"Destructor Called\n";
    }
    void display()
    {
        cout<<"A: "<<a<<endl;
        cout<<"B: "<<b<<endl;
    }
};
int main()
{
    MyClass obj1(10,5);
    MyClass obj2(obj1);
    obj1.display();
    obj2.display();
    return 0;
}

// O/p: Constructor Called
//      Constructor Called
//      A: 10
//      B: 5
//      A: 10
//      B: 5
//      Destructor Called
//      Destructor Called