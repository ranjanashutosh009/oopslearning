#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number() {}
    number(int b)
    {
        a = b;
    }
    number(number &obj)
    {
        a = obj.a;
    }
    void display()
    {
        cout << "the number is" << a << endl;
    }
};
int main()
{
    number x(2342), y(x);
    x.display();
    y.display();

    return 0;
}