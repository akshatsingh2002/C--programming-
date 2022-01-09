/*write a program to implement virtual base calss in which there are four class named as student , exam, sprots and result. we need to print the details
rollno, name,department,sports marks,exam marksand resultant marks from respective classes*/
#include<iostream>
#include<string.h>
using namespace std;
class student{
    public:
    string name,dept;
    int rollno;
    void read(){
        cout<<"Enter name of the student: ";
        cin>>name;
        cout<<endl<<"Enter roll no of the student : ";
        cin>>rollno;
        cout<<"\nEnter Department of the student: ";
        cin>>dept;
    }
    void show(){
        cout<<"\nName: "<<name<<"\tRoll no:"<<rollno<<"\tDepartment:"<<dept;
    }
    
};
class exam:virtual student{
public:
    int marks1;
    void read(){
        cout<<"\nEnter exam markrs:";
        cin>>marks1;
    }
    void show(){
        cout<<"\nExam marks : "<<marks1;
    }
    
};
class sports:virtual student{
    public:
    int marks2;
    void read(){
        cout<<"\nEnter sports markrs:";
        cin>>marks2;
    }
    void show(){
        cout<<"\nSports marks : "<<marks2;
    }
    
};
class result:virtual student, exam, sports{
    public:
    void read(){
        student::read();
        exam::read();
        sports::read();
    }
    void show(){
        student::show();
        exam::show();
        sports::show();
    cout<<"\nThe total is "<<marks1+marks2;
    }
};
int main(){
    result obj1;
    obj1.read();
    obj1.show();
    return 0;
}