#include <iostream>
using namespace std;
template <class T>
void Function(T a,T b)
{
    cout<<"A: "<<a<<"\t\t"<<"B: "<<b<<endl;
}
int main()
{
    int a=10,b=5;
    float c=10.5,d=5.5;
    char e='a',f='b';
    string g="Vaibhav",h="ClasherV";
    Function(a,b);
    Function(c,d);
    Function(e,f);
    Function(g,h);
    return 0;
}

// O/p: A: 10           B: 5
//      A: 10.5         B: 5.5
//      A: a            B: b
//      A: Vaibhav              B: ClasherV