#include<iostream>
using namespace std;
inline int product(int a , int b){        //when in function work is less make it inline
    // static int c=0;  // Not recommended to use below lines with inline functions
                      // initialize/execute only one time
    // c=c+1;                   // next time this function is run ,the value of c will be retained
    return a*b;
}
float moneyreceived(int currentmoney,float factor=1.04){
    return currentmoney*factor;

}
int main(){
    int a ,b;
    cout<<" enter the value of a and b"<<endl;
    cin>>a>>b;
    // cout<<" the product of a and b is "<<product(a,b)<<endl;
    // cout<<" the product of a and b is "<<product(a,b)<<endl;
    // cout<<" the product of a and b is "<<product(a,b)<<endl;
    int money=100000;
    cout<<" if you have "<<money<<" Rs in Your bank account "<<moneyreceived(money)<<" Rs after 1 year "<<endl;
    cout<<" For  VIP :if you have "<<money<<" Rs in Your bank account "<<moneyreceived(money,1.1)<<" Rs after 1 year "; //DEFAULT ARG
        return 0;
}