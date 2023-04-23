#include <iostream>
#include<math.h>
using namespace std;
class point{
int a, b;
public:
    point(int x, int y){
    a=x;
    b=y;
    }
    void display(){
    cout<<a<<" "<<b<<endl;}
    };

int main()
{
    point k(1,2);
    k.display();
    point l(3,4);
l.display();
    return 0;
}
