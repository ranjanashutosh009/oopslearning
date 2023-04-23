#include<iostream>
using namespace std;
int sum(int a, int b); // type funtion-name(arguments); this tells that there is sum in the program and tells compiler to find it
 int main()
 {
     int s, t;
     cout<<"enter the first number"<<endl;
     cin>>s;
     cout<<"enter the second number"<<endl; // here s t are the actual pararmeters
     cin>>t;
     cout<<"the addition of two numbers is  "<<sum(s, t); // return value function key
    return 0;
 }
  int sum(int a, int b){
 int c = a+b; // a b takes the actual parameter value and performs the action
 return c;
 }
