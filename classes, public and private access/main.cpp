#include <iostream>
using namespace std;
class Employee
{
private:
    int a, b, c;
public:
    int d, e;
    void setdata(int a1, int b1, int c1) ;//declaration
    void getdata()
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }
};
void Employee :: setdata(int a1, int b1, int c1){ // we are using a1 because we cannot access private member directly
a=a1;
b=b1;
c=c1;
}
int main()
{
    Employee happy;
    happy.setdata(1,2,3); //here private can be accessed through public only
    happy.getdata();
    return 0;
}
