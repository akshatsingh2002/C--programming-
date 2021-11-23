#include<iostream>
using namespace std;
class second;
class first{
    int a;
    public:
    void read(){
        cout<<"Enter number : "<<endl;
        cin>>a;
    }
    friend void max(first,second);

};
class second{
    int b;
    public:
    void read(){
    cout<<"Enter number : "<<endl;
        cin>>b;
    }
    friend void max(first, second);
};
void max(first f,second s){
   
    if(f.a>s.b){
        cout<<f.a<<" is bigger";
    }
    else 
    cout<<s.b<<" is bigger";
}
int main(){
    first obj1;
    second obj2;
    obj1.read();
    obj2.read();
    max(obj1,obj2);
    return 0;
}