//write a program to implemet array of objectwith rollno,age,brach//
#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    int rollno,age,i;
    string branch;
    void setdata(){
        cout<<"Enter roll number of the student"<<endl;
        cin>>rollno;
        cout<<"Enter age of the student"<<endl;
        cin>>age;
        cout<<"Enter brach of the student"<<endl;
        cin>>branch;

    }
    void getdata(){
        cout<<"\nroll number"<<rollno<<"\nage"<<age<<"\nBranch"<<branch;
    }
};
int main(){
    student arr[50];
    int i,n;
    cout<<"Enter sixeof the array"<<endl;
    cin>>n;

    for(i=0;i<n;i++){
arr[i].setdata();

    }
    cout<<endl;
    for(i=0;i<n;i++){
arr[i].getdata();

    }

    return 0;
}