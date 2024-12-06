// Constant Parameter and Member Function

#include <iostream>
using namespace std;
class MyClass
{
    int a,b,c;
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
    void setValue(const int val1,const int val2)
    {
        a=val1,b=val2+5;
    }
};
int main()
{
    MyClass obj(10,5);
    obj.display();
    return 0;
}

// O/p: A: 10
//      B: 5