//passing object as an argument and using call by reference methohd//
#include<iostream>
using namespace std;
class Bank{
    public:
    int accnumber,acc;
    float balance;
    float transaction_money;
    void setdata(){
        cout<<"Enter account number"<<endl;
        cin>>accnumber;
        cout<<"\nEnter balance amount\n";
        cin>>balance;
    }
    void getdata(){
        cout<<"Account number is :"<<accnumber<<" and balcnce is :"<<balance;
    }
    void transaction(Bank &c2){
        
        cout<<"Enter money amount to be transfered"<<endl;
        cin>>transaction_money;
        cout<<endl;
        balance=balance-transaction_money;
        c2.balance=c2.balance+transaction_money;
        

    }
};
int main(){
    Bank c1,c2;
    c1.setdata();
    c2.setdata();
    c1.getdata();
    c2.getdata();
    c1.transaction(c2);
     c1.getdata();
    c2.getdata();
    return 0;
}
