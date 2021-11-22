#include<iostream>
using namsespace std;
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
void main(){
    distance obj1;
    obj1.show();
    obj1.read();
obj1.show();
}
