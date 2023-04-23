#include <iostream>

using namespace std;
class complex;

class calculator{
public:
    int  add(int a, int b)
    {
    return (a+b);
    }
    int sumrealcomplex(complex, complex);
    };

    class complex{
     int a, b;
     friend int calculator :: sumrealcomplex(complex, complex); // this is for the single frient declaration
     // to declare whole calculator as friend
     // frienc class calculator
 public:
    void setnumber(int n1, int n2){
    a=n1;
    b=n2;
    }
    void printnumber(){
    cout<<"the sum of o1 and o2 are"<<a<<" + "<<b<<endl;
    }
    };
    int calculator :: sumrealcomplex(complex o1, complex o2){
    return (o1.a + o2.a);
    }
int main()
{
    complex o1, o2;
    o1.setnumber(5,5);
    o2 .setnumber(6,7);
    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout<<"the sum of real part of o1 and o2"<<res<<endl;

    return 0;
}
