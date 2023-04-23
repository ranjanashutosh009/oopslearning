#include <iostream>

using namespace std; //if inline is used then the whole process doesn't repeat always instead doing part of the program gets copied to
inline product(int a, int b){ //time is saved by inline
return a*b;
}
float moneyreceived(int currentmoney, float factor=1.04){ // here factor acts as the default arguement
return currentmoney*factor;
}

int main()
{
/*    int a, b ;
    cin>>a>>b;
    cout<<"the product of two numbers are"<<product(a, b); //by inline function a*b is directly replaced here so no repeatation takes place
    return 0; */
    int money=10000;
    cout<<"the amount of money received will be"<<moneyreceived(money)<<endl;
    cout<<"the money received for vip people are"<< moneyreceived(money, 1.08);
    return 0;
}
