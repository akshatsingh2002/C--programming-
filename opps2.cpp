#include<iostream>
using namespace std;
class Employee{   //by default all thing are private in calss//
//we need to use access modifier to make it public//
public: 
    string Name;
    string Company;
    int Age;
    void Introduction(){
        cout<<"Name="<<Name<<endl;
        cout<<"Age="<<Age<<endl;
        cout<<"Company="<<Company<<endl;
    }
Employee(string name,string company,int age)
{//creating a constructor//

Name=name;
Company=company;
Age=age;
}
};//this just represents structure not data//



int main(){
//creating instance in the main funcion//
int number;
/*but
if we have to enter it for many people  we have write the code many time 
which is idiotic so we will use contructors*/
/*even if we dont create constructors system automactically creates a 
constructor that is called a default constructor it is a method but it 
still does not have any return type*/

Employee employee3=Employee("shiv","amazon",35);  
//using constructor to enter the data//
employee3.Introduction();
Employee employee1=Employee("Akshat","Microsoft",18);
employee1.Introduction();

    return 0;
}