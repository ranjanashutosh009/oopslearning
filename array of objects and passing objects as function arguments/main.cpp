#include <iostream>
#inc

using namespace std;
/*  class employee{
int id;
int salary;
public:
    void setdata(){
    salary =122;
     cout<<"enter id of the employee is "<<endl;
     cin>>id;
     }
     void displaydata(){
     cout<<"the id of the employee is"<<id<<endl;
      }
     };

int main()
{
    /* employee happy, tappy, kappy; /* employee fb[4];
                                    fb[0].setdata ....
   happy.setdata();
   ..........
    }
**********************
employee fb[4];
for(int i=0; i<=4; i++){
    fb[i].setdata();
    fb[i].displaydata();
}
*/
class complex
{
    int a;
    int b;

public:
    void setdata(int u, int v)
    {
        a = u;
        b = v;
    }
    void setdatasum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void displaydata()
    {
        cout << "the sum of the complex number " << a << " + i" << b << endl;
    }
    friend complex sumcomplex(complex o1, complex o2);
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, c3, sum;
    c1.setdata(1, 2);
    c1.displaydata();

    c2.setdata(3, 4);
    c2.displaydata();

    c3.setdatasum(c1, c2);
    c3.displaydata();

    sum = sumcomplex(c1, c2);
    sum.displaydata();

    cout << "hi";

    return 0;
}
