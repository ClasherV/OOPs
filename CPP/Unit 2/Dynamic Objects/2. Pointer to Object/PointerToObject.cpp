// Pointer to Object

// Dynamic Object

#include <iostream>
using namespace std;
class Addition
{
    int a,b;
    public:
    void setData(int x,int y)
    {
        a=x,b=y;
    }
    int add()
    {
        return (a+b);
    }
};
int main()
{
    Addition obj;
    Addition *ptr=&obj;
    ptr->setData(10,20);
    int Sum=ptr->add();
    cout<<"Sum: "<<Sum<<endl;
    delete ptr;
    return 0;
}

// O/p: Sum: 30