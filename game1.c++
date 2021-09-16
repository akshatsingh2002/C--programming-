#include<iostream>
using namespace std;
int main(){
    string name,city;
    int age;
    cout<<"Enter your name\n";
    getline(cin,name);
    cout<<"Enter the name of the city where you live\n";
    getline(cin,city);
    cout<<"Enter you age\n";
    cin>>age;
    cout<<"My name is "<<name<<"and i live in "<<city<< " and i am "<<age<<" years old\n";
    return 0;
}