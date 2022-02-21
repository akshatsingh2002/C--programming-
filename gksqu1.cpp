#include<iostream>
#include<string.h>
using namespace std;
string city;
long t;
int main(){
    cin>>t;
    for(long i=0;i<t;i++){
        cin>>city;
        if(city.hasEnding('a','A','e','E','i','I','o','O','u','U')==true){
            cout<<city<<" is ruled by Alice";
        }
        else if(city.rfind('y','Y')==true){
            cout<<city<<" is ruled by nobody";
        }
        else 
        cout<<city<<" is ruled by Bob";
    }
    return 0;
}