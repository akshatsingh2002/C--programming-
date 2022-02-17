#include<bits/stdc++.h>
#include<string.h>
using namespace std;
long int number_of_clients,ingredients,tot=0;
int main(){
    
    cin>>number_of_clients;
    string ing;
    char choice;
    int c=0,mush=0,tom=0,bas=0,pep=0,pip=0;
    while(int i=0;i<number_of_clients;i++){
        cin>>ingredients;
        while(int j=0;j<ingredients;j++){
            tot++;
            getline(cin,ing);
            if(ing=='cheese')
            choice='c';
            else if(ing=='mushrooms')
            choice='m';
            else if(ing=='tomatoes')
            choice='t';
            else if(ing=='basil')
            choice='b';
            else if(ing=='peppers')
            choice='p';
            else if(ing=='pineapple')
            choice='pi';
            switch(ing){
                case 'c':c++;
                break;
                case 'm':mush++;
                break;
                case 't':tom++;
                break;
                case 'b':bas++;
                break;
                case 'p':pep++;
                break;
                case 'pi':pip++;
                break;

            }
        }
    }
cout<<tot;
    return 0;
}