// Constant Objects

#include <iostream>
using namespace std;
class MyClass
{
    int a,b;
    public:
    MyClass(int val1,int val2)
    {
        a=val1;
        b=val2;
    }
    void display() const
    {
        cout<<"A: "<<a<<endl;
        cout<<"B: "<<b<<endl;
    }
    void setValue(int val1,int val2)
    {
        a=val1,b=val2;
    }
};
int main()
{
    const MyClass obj(10,5);
    obj.display();
    return 0;
}

// O/p: A: 10
//      B: 5