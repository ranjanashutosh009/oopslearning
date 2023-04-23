#include <iostream>
using namespace std;
int main()
{
    int fact, n;
    cout << "enter the number" << endl;
    cin >> n;
    fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "factorial is " << fact;
    return 0;
}