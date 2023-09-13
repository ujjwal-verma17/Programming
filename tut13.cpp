//array & pointers

#include<iostream>
using namespace std;
int main(){
    int marks[]={23,45,65,98};
    int mathmarks[4];
    mathmarks[0]=99;
    mathmarks[1]=89;
    mathmarks[2]=78;
    mathmarks[3]=99;
    cout<<"these are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
cout<<"these are   marks"<<endl;
    marks[2]=455;         //you can change the value of array
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // for(int i=0 ;i<4;i++){
    //     cout<<"the value of marks  "<<i<<"  is "<<marks[i]<<endl;
    // }



    //quiz :  do the same with while loop
    // int i=0;
    // while(i<4){
    //     cout<<"the value of marks "<<i<<"  is  "<<marks[i]<<endl;
    //     i++;
    // }


    //Pointers and arrays
    int* p=marks;           // p is storing address of starting of array ( i.e marks[0])
    cout<<"the value of marks[0]/*p is "<< *(p)<<endl;        //script p will print value of mark[0],, *(p+1) consecutive
    cout<<"the value of marks[1]/*(p+1) is "<< *(p+1)<<endl;
    cout<<"the value of marks[2]/*(p+2) is "<< *(p+2)<<endl;
    cout<<"the value of marks[3]/*(p+3) is "<< *(p+3)<<endl;

    
    return 0;
}