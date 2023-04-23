#include <iostream>
using namespace std;
class complex
{
    int a, b;
    

public:
    complex(void)
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << " " << b << " " << endl;
    }
};
int main()
{
    complex c;
    c.display();
    complex d(0, 0);
    d.display();
    return 0;
}
