#include<iostream>
using namespace std;
void add(int,int);
void add(int,int,int);
int main(){
    int a,b,c;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"enter the value of c"<<endl;
    cin>>c;
    add(a,b);
    add(a,b,c);
    return 0;
}
void add(int num1,int num2){
    cout<<"The result is: "<< num1+num2<<endl;
}
void add(int num1,int num2,int num3){
    cout<<"The result is: "<<num3+num1+num2<<endl;
}