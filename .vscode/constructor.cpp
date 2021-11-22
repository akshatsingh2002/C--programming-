#include<iostream>
using namsespace std;//use iostream.h and conio.h for turbo c++//
class distance{
    int feet,inch;
    public:
    distance(){
        feet=0;
        inch=0;
    }
    void read(){
        cout<<"Enter the value of feet"<<enld;
        cin>>feet;
        cout<<enld<<"enter the value of inch"<<enld;
        cin>>inch;
    }
    void show(){
        cout<<"Feet:"<<feet<<enld<<"Inch:"<<inch;
    }
};
void main(){//use clrscr and getch for turbo c++//
    distance obj1;
    obj1.show();
    obj1.read();
obj1.show();
}
