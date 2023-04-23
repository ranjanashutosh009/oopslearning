#include <iostream>
using namespace std;
class simple
{
    int data1;
    int data2;

public:
    simple(int a, int b = 32)
    {
        data1 = a;
        data2 = b;
    }
    void printdata()
    {
        cout << "the value of data1 and data 2 are" << data1 << " " << data2 << endl;
    }
};
int main()
{
    simple simp(32, 342);
    simp.printdata();
    return 0;
}