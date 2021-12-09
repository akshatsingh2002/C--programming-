#include<iostream>
using namespace std;
int main(){
    long n,num,i=1,j=1;
    cout<<"Enter the value to find the number of steps it ends in :"<<endl;
    cin>>n;
    num=n;
    while(num>=1){
    if(num%2!=0){
        for(;num%2==0;i++){
            num=(num*3)+1;
        }
    }
    if(num%2==0){
        for(;num%2==1;j++)
        num=num/2;
    }
    
    }
    cout<<"Number of iterations ="<<i+j<<endl;
    return 0;
}

    
