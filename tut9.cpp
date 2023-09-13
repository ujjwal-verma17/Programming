// if -else and control structures
//1.sequence structure
//2.selection structure
//3.loop structure
//these are basic control structure
//sequence structure
#include<iostream>
using namespace std;
int main(){
    //cout<<"this is tut 9";
    int age;
    cout<<"tell me your age "<<endl;
    cin>>age;
    //*****selection control if else...
    // if ((age<18)&&(age>0)){
    //     cout<<"you cannot come to my party"<<endl;
    // }
    // else if (age==18){
    //     cout<<"you are kid and not allowed"<<endl;
    // }
    // else if (age <=0){
    //     cout<<"you are not yet born"<<endl;
    // }
    // else{
    //     cout<<"you can come to the party"<<endl;
    // }
    // selection control structure : switch case statements
    switch (age)
    {
    case 18:
        /* code */
        cout<<"you are 18"<<endl;
        break;
    case 22:
        /* code */
        cout<<"you are 22"<<endl;
        break;                          // if break is not used then all condition after that will execute
    case 2:
        /* code */
        cout<<"you are 2"<<endl;
        break;
    default:
    cout<<"no special case"<<endl;
        break;
    }
    cout<<"done with switch case";

    return 0;
}