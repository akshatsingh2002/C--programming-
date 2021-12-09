//write a program to read and print details of employee using multiple inheritance //
#include<iostream>
using namespace std;
class employee{
    public:
    string name;
    int employee_id;
    void read(){
        cout<<"Enter the employee name :";
        cin>>name;
        cout<<endl<<"Enter the employee id:";
        cin>>employee_id;
    }
    void show(){
        cout<<endl<<" Name of the employee :"<<name<<"\n ID of the employee:"<<employee_id;
    }
};
class details{
    public:
    string department;
    float salary;
    void read(){
        cout<<"Enter the department of the employee:";
        cin>>department;
        cout<<endl<<"Enter the salary of the employee";
        cin>>salary;
    }
    void show(){
        cout<<endl<<"Department : "<<department<<"\nSalary : "<<salary;
    }
};
class other_deatils:public details,public employee{
    public:
    char gender;
    string qualification;
    void read(){
        employee::read();
        details::read();
        cout<<endl<<" Enter gender of the employee\n select M for male and F for female";
        cin>>gender;
        cout<<"\nEnter qualification :";
        cin>>qualification;
    }
    void show(){
        employee::show();
        details::show();
        cout<<endl<<"The gender of the employee is :"<<gender<<endl<<"The qualification of the employee is :"<<qualification;
    }
};
int main(){
    other_deatils obj1;
    obj1.read();
    obj1.show();
    return 0;
}