// Friend Function

#include <iostream>
using namespace std;
class B;
class A
{
    int a;
    friend int Friend(A,B);
    public:
    A(int x)
    {
        a=x;
    }
};
class B
{
    int b;
    friend int Friend(A,B);
    public:
    B(int y)
    {
        b=y;
    }
};
int Friend(A r1,B r2)
{
    int Sum=0;
    Sum=r1.a+r2.b;
    return Sum;
}
int main()
{
    A obj1(10);
    B obj2(20);
    int Sum=Friend(obj1,obj2);
    cout<<"Sum: "<<Sum<<endl;
    return 0;
}

// Sum: 30