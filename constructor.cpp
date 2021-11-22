#include<iostream>
using namespace std;//use iostream.h and conio.h for turbo c++//
class distance1{
    public:
    int feet,inch;
    public:
    distance1(){
        feet=0;
        inch=0;
    }
    void read(){
        cout<<"Enter the value of feet"<<endl;
        cin>>feet;
        cout<<endl<<"enter the value of inch"<<endl;
        cin>>inch;
    }
    void show(){
        cout<<"Feet:"<<feet<<endl<<"Inch:"<<inch;
    }
};
int main(){//use clrscr and getch for turbo c++//
    distance1 obj1;
    obj1.show();
    obj1.read();
obj1.show();
return 0;
}
