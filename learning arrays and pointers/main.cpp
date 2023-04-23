#include <iostream>

using namespace std;

int main() //arrays can only be used when all are of same type like int or float
{
    int marks[4] = {45, 46, 47, 48};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[2]=232; // we can alter the arrays here by reassigning the values
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    // the arrays by the use of loop
    for(int i=0; i<4; i++){
        cout<<"the values of the marks "<<i<<" is "<<marks[i]<<endl;
    }
    // arrays and pointers and * gives the value of the pointer where marks itself is the address or else we use &a
    int *p=marks;
    cout<<"the marks by using arrays and pointers is "<<*p<<endl;
    cout<<"the marks by using arrays and pointers is "<<*p+1<<endl;
    cout<<"the marks by using arrays and pointers is "<<*p+2<<endl;
    cout<<"the marks by using arrays and pointers is "<<*p+3<<endl;
    return 0;

}
