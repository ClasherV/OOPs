// Nested Class

#include <iostream>
using namespace std;
class A
{
    public:
        class B
        {
            private:
                int num;
            public:
                void setData(int n)
                {
                    num=n;
                }
                void getData()
                {
                    cout<<"Value of Num: "<<num<<endl;
                }
        };
};
int main()
{
    A::B obj;
    obj.setData(5);
    obj.getData();
    return 0;
}

// O/p: Value of Num: 5