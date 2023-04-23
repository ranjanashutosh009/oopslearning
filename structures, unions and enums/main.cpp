#include <iostream>

using namespace std; // structure is user defined datatype to combine different to group different type of items as arrays are used to group same type of elements

 typedef struct employee
{
    // data
    int eID;
    char favChar;
    float salary;
} ep;
union money    // union is used for memory management like max value of memory is taken into consideration instead of 9, 4 is taken
{ //in union is one time only one can be used at a time and only max one in used
    int rice; //4
    char car;  //1
    float pounds;  //4

};
    int main()
{
    cout<<"about enum"<<endl; // enum is used to decrease the complexity of the program or rather make it more readable
    enum meal{breakfast, lunch, dinner}; // here breakfast has become a datatype also luch and dinner
   meal t1=breakfast;
   cout<<t1<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    cout<<"about unions"<<endl;
    union money m1;
    m1.rice=32;
    cout<<m1.rice<<endl;
    cout<<"about structures"<<endl;
 ep getto;
 getto.eID = 1;
 getto.favChar = 'c';
 getto.salary = 123;
  cout<<"the value of getto eID  "<<getto.eID<<endl;
  cout<<"the value of getto favchar "<<getto.favChar<<endl;
  cout<<"the value of getto salary "<<getto.salary<<endl;

return 0;
}

