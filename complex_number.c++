#include<iostream>
#include<cmath>
using namespace std;
class complex{
    public:
    int real,img;
    public:
    void read();
    void show();
    void add(complex, complex);
};
void complex::read(){
    cout<<"Enter real number: ";
    cin>>real;
    cout<<endl<<"Enter img number: ";
    cin>>img;
    cout<<endl;
}
void complex::show(){
    cout<<real;
    if(img<0){
    cout<<"-i";
    }
    else{
    cout<<"+i";
    }
    cout<<abs(img);
}
void complex::add(complex num1,complex num2){
   real=num1.real+num2.real;
   img=num1.img+num2.img;
}
int main(){
    complex c1,c2,c3;
    c1.read();
    c2.read();
    c3.add(c1,c2);
    c3.show();

    return 0;
}