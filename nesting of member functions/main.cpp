

    #include <iostream>
    #include<string>

    using namespace std; //nesting of member functions
    class nesting{
    string s;
    public:
        void read();
        void checkbinary();
        void complement();
        void display();
        };
    void nesting :: read() {
    cout<<"enter a binary number ";
    cin>>s;
    }
    void nesting :: checkbinary(){
    for (int i=0; i<s.length(); i++)
        {
            if(s.at(i)!='0' &&s.at(i)!='1'){
                cout<<"the binary is invalid"<<endl;
                exit(0);
            }
        }}
        void nesting :: complement() {
           for (int i=0; i<s.length(); i++){
            if(s.at(i)=='0'){
                s.at(i)='1';
            }
            else{
                s.at(i)= '0';
            }
           }
 }

    void nesting:: display(){
             cout<<"the binary numbers are"<<endl;
          for (int i=0; i<s.length(); i++){

              cout<<s.at(i);
          }
    }

    int main()
    {
        nesting b;
        b.read();
        b.checkbinary();
        b.complement();
        b.display();
        return 0;
    }
