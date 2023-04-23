#include <iostream>

using namespace std; //static data member is class associated and its memory is shared by all required objects
class employee{          // static data function can also be made which only accesses static data members
int id;
static int count;

public:
    void setdata(){
    cin>>id;
    }
    void getdata(){
    cout<<"the value of the id of employee is "<<id<<" for employee number"<<count<<endl;
    count ++;
    }
    static void getcount(){
    cout<<"the value of count is by using static function is "<<count-1 <<endl;
    }
};

int employee::count;

int main()
{
    employee happy, tappy, kappy;
    happy.setdata();
    happy.getdata();
    employee::getcount(); // this is also a way to call a class function

 tappy.setdata();
    tappy.getdata();
employee::getcount();

 kappy.setdata();
    kappy.getdata();
    employee::getcount();

    return 0;
}
