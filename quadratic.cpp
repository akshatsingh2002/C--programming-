#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,x1,x2;
    cout<<"Enter the value of a b and c for quadratic equation "<<endl;
    cin>>a>>b>>c;
    x1=(-b+(sqrt((b*b)-4*a*c)))/2*a;
    cout<<"The first value of a is"<<x1<<endl;
      x2=(-b-(sqrt((b*b)-4*a*c)))/2*a;
      cout<<"The second value of a is"<<x2<<endl;
    return 0;
}