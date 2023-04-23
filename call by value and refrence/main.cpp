#include <iostream>
using namespace std;
//int pointerswap(int*a, int*b){     // this is done by reference to pointer variable
int referencebyvalueswap(int &a, int &b){ // this is done by reference by variable
int temp=a;
a=b;
b=temp;
}
int main()
{
    int num1=2, num2=4;
    cout<<"the number num1 and num2 are "<<num1<<" "<<num2<<endl;
  //  pointerswap(&num1, &num2); //this was for reference by pointer variable
  referencebyvalueswap(num1, num2);
     cout<<"the number num1 and num2 are "<<num1<<" "<<num2<<endl;
    return 0;
}
