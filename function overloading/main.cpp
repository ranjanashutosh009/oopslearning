#include <iostream>

using namespace std; //function overloading is basically having different functions with same name
int volume(double r, int h){
return(3.14*r*r*h);}
int volume(int a){
return(a*a*a);}
int volume(int l, int b, int h){
return(l*b*h);
 }

int main()
{
cout<<"the volume of 3 and 6 "<<volume(3,6)<<endl;
cout<<"the volume of 3, 4, 5 "<<volume(3, 4, 5)<<endl;
cout<<"the volume of 5 "<<volume(5)<<endl;
return 0;
}
