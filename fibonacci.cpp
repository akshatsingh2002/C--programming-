#include<iostream>
using namespace std;
class fibo{
    public:
    int i,n,a=0,b=1,c;
    void start();
    

};
void fibo::start(){
    cout<<"Enter the number till you want fibonacci series: ";
    cin>>n;
    if(n==1){
    cout<<a;
    }
    else if(n==2){
        cout<<a;
        cout<<b;
    }
    else{
        cout<<a<<b;
    for(i=0;i<n-2;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<b;

        
    }
    }

}
int main(){
    fibo c1;
    
    c1.start();

    return 0;
}