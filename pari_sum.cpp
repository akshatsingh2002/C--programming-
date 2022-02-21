//Problem Statement
//You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.//
#include<iostream>
using namespace std;
 
int main(){
    
    int n,s;
    int i,j;
    cin>>n>>s;
    int *arr=new int[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(arr[i]+arr[j]==s){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
    return 0;
}