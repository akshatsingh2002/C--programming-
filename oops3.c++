#include<iostream>
using namespace std;
class Bank{
    public:
    int accnumber;
    float balance;
    void setdata(){
        cout<<"Enter account number"<<endl;
        cin>>accnumber;
        cout<<"\nEnter balance amount\n";
        cin>>balance;
    }
    void getdata(){
        cout<<"Account number is :"<<accnumber<<" and balcnce is :"<<balance;
    }
    void transaction(Bank acc1,Bank acc2){
        float transaction_money;
        cout<<"Enter money amount to be transfered"<<endl;
        cin>>transaction_money;
        cout<<endl;  
        acc1.balance=acc1.balance-transaction_money;
        acc2.balance=acc2.balance+transaction_money;
        cout<<"\nThe account :"<<acc1.accnumber<<" has the amount :"<<acc1.balance<<endl;
        cout<<"\nThe account :"<<acc2.accnumber<<" has the amount :"<<acc2.balance;


    }
};
int main(){
    Bank c1,c2,c3;
    c1.setdata();
    c2.setdata();
    c1.getdata();
    c2.getdata();
    c3.transaction(c1,c2);

    return 0;
}