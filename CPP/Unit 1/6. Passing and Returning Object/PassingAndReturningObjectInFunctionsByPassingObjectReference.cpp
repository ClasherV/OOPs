// Passing and Returning Object in Functions by Passing Object Reference

#include <iostream>
using namespace std;
class Student
{
    string name;
    int roll_no,age;
    public:
    void setData(string Name,int Age,int Roll_Num)
    {
        name=Name;
        age=Age;
        roll_no=Roll_Num;
    }
    void getData()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll Number: "<<roll_no<<endl;
    }
    Student Update(Student &S)
    {
        S.age=20;
        return S;
    }
};
int main()
{
    Student S1,P;
    S1.setData("Vaibhav",19,48);
    S1.getData();
    P=S1.Update(S1);
    cout<<endl;
    S1.getData();
    cout<<endl;
    P.getData();
    return 0;
}

// O/p: Name: Vaibhav
//      Age: 19
//      Roll Number: 48
//      
//      Name: Vaibhav
//      Age: 20
//      Roll Number: 48
//      
//      Name: Vaibhav
//      Age: 20
//      Roll Number: 48