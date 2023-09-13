#include<iostream>
using namespace std;

int main(){
    enum meal {breakfast,lunch,dinner}; //enum
    meal m2=breakfast;
    cout<<m2;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    return 0;
}