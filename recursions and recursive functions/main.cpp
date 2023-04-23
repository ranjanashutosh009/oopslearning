#include <iostream>

using namespace std;
int factorial(int n){
if(n<=1){
    return 1;
}
return n*factorial(n-1);
}

int fib(int n){
if(n<3){
    return 1;
}
return fib(n-2)+fib(n-1);
}


int main()
{
  /*  int n;
    cin>>n;
    cout<<"the factorial of the number is "<<factorial(n)<<endl; */
    int n;
    cin>>n;
    cout<<"the fibonacci element of nth place is"<<fib(n);
    return 0;
}
