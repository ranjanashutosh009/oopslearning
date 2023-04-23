#include <iostream>

using namespace std; //program to use arrays inside a class
class shop{
int itemid[10];
int itemprice[10];
int counter;
public:
    void incounter(){
    counter=0;
    }
    void setprice();
    void displayprice();
};
void shop::setprice(){
cout<<"enter the id of your item"<<endl;
cin>>itemid[counter];
cout<<"enter the price of the item"<<endl;
cin>>itemprice[counter];
counter ++;
}
void shop::displayprice(){
for(int i=0; i<counter; i++)
    {
        cout<<"the price for the itemid "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.incounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}
