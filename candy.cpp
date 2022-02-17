#include<iostream>
using namespace std;
long n,m,c[1000],t,i=0,j=0,arr1[1000],sum1=0,result;
int main(){
    cin>>t;
    for(i=0;i<t;i++){
    cin>>n>>m;
    for(j=0;j<n;j++){
        cin>>arr1[i];
        sum1=sum1+arr1[i];
    }
    result=sum1%m;
    cout<<result<<endl;
    sum1=0;
    }
    return 0;
}