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
Employee employee1;//employee1 is the object//
//we will use object name with . operator//
employee1.Name="Akshat";
employee1.Age=19;
employee1.Company="Bla bla bal";// setting values//
//we can also defing behaviour//
//now we are going to create a funcion in the class//
employee1.Introduction();//invoking function//
//creating another employee//
Employee employee2;
employee1.Name="Anirudh";
employee1.Age=60;
employee1.Company="Sharma Enterprices";/*but
if we have to enter it for many people  we have write the code many time 
which is idiotic so we will use contructors*/
/*even if we dont create constructors system automactically creates a 
constructor that is called a default constructor it is a method but it 
still does not have any return type*/

Employee employee3=Employee("shiv","amazon",35);
//using constructor to enter the data//
employee3.Introduction();

    return 0;
}