#include <iostream>
using namespace std;
template <class T>
class Value
{
    T a,b;
    public:
    Value(T p,T q)
    {
        a=p,b=q;
    }
    void display()
    {
        cout<<"A: "<<a<<"\t\t"<<"B: "<<b<<endl;
    }
};
int main()
{
    Value <int> obj1(10,5);
    Value <float> obj2(10.5,5.5);
    Value <char> obj3('a','b');
    Value <string> obj4("Vaibhav","ClasherV");
    obj1.display();
    obj2.display();
    obj3.display();
    obj4.display();
    return 0;
}

// O/p: A: 10           B: 5
//      A: 10.5         B: 5.5
//      A: a            B: b
//      A: Vaibhav              B: ClasherV