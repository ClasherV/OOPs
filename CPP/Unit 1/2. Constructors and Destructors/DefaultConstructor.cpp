// Default Constructor

#include <iostream>
using namespace std;
class MyClass
{
    private:
        int a,b;
    public:
        MyClass()
        {
            a=10,b=5;
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
    MyClass obj;
    obj.display();
    return 0;
}

// O/p: Constructor Called
//      
//      A: 10
//      B: 5
//      
//      Destructor Called