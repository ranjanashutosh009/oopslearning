#include <iostream>

using namespace std;

int main() // pointer is a datatype which holds address of other data types
{
    int a=3;
    int* b;
    b=&a; //& is the address of the operator
    // b is pointer that holds the address of a variable
    // * is the dereference operator
   // here addess means about the locations where the variable in stored like while doing the program it is stored in the ram
   //when we use *b then the value at the address of b is printed
cout<<"the address of &a is given by"<<&a<<endl;
    cout<<"the address of b is given by "<<b<<endl;
    cout<<"the value at the adress of a and b is given by "<<*b<<endl;
    int **c=&b;
    cout<<"the value of address of c is"<<&b;
    return 0;
}
