// Constant Object with Constructors

#include <iostream>
using namespace std;
class MyClass
{
    const int a,b;
    public:
    MyClass(int x,int y):a{x},b{y}{}
    void display()
    {
        cout<<"A: "<<a<<endl;
        cout<<"B: "<<b<<endl;
    }
};
int main()
{
    MyClass obj(10,20);
    obj.display();
    return 0;
}

// O/p: A: 10
//      B: 20