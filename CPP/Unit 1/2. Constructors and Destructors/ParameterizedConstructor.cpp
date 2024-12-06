// Parameterized Constructor

#include <iostream>
using namespace std;
class MyClass
{
    int a,b;
    public:
    MyClass(int x,int y)
    {
        a=x,b=y;
        cout<<"Constructor Called\n\n";
    }
    ~MyClass()
    {
        cout<<"\nDestructor Called";
    }
    void display()
    {
        cout<<"A: "<<a<<endl;
        cout<<"B: "<<b<<endl;
    }
};
int main()
{
    MyClass obj(10,5);
    obj.display();
    return 0;
}

// O/p: Constructor Called
//      
//      A: 10
//      B: 5
//      
//      Destructor Called