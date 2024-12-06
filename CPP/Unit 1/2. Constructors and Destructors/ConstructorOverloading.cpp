// Constructor Overloading

#include <iostream>
using namespace std;
class MyClass
{
    int a,b;
    public:
    MyClass()
    {
        a=10,b=5;
    }
    MyClass(int x,int y)
    {
        a=x,b=y;
    }
    void display()
    {
        cout<<"A: "<<a<<endl;
        cout<<"B: "<<b<<endl;
    }
};
int main()
{
    MyClass obj1;
    MyClass obj2(20,30);
    obj1.display();
    cout<<endl;
    obj2.display();
    cout<<endl;
    obj1.display();
    return 0;
}

// O/p: A: 10
//      B: 5
//      
//      A: 20
//      B: 30
//      
//      A: 10
//      B: 5