#include<iostream>
using namespace std;
class add{
    public:
    float num1,num2;
    void get_data(float a, float b){
        num1=a;
        num2=b;
    }
        void multiplying()
        {}
        void adding(){}

    
};
void add::multiplying(){
    cout<<num1*num2;
}
void add::adding(){
    cout<<(int)(num1+num2);
}
int main(){
    add a1;
    float x,y;
    cout<<"Enter the number you want to add and multiply"<<endl;
    cin>>x>>y;
    a1.get_data(x,y);
    a1.multiplying();
    cout<<endl;
    a1.adding();

    return 0;
}