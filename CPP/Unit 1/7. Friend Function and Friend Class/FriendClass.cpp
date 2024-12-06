// Friend Class

#include <iostream>
using namespace std;
class B;
class A
{
    int a,b;
    friend class B;
    public:
    A(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"A: "<<a<<"\t\t"<<"B: "<<b<<endl;
    }
};
class B
{
    public:
    void Sum(A r)
    {
        int Sum=0;
        Sum=r.a+r.b;
        cout<<"Sum: "<<Sum<<endl;
    }
};
int main()
{
    A obj1(10,20);
    B obj2;
    obj2.Sum(obj1);
    return 0;
}

// Sum: 30