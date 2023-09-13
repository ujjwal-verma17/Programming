#include<iostream>
using namespace std;
int factorial(int n){
    if (n<=1){
        return 1;
    }
      return n*factorial(n-1);
}
int main(){
    //factorial of number
    int a; 
    cout<<" enter a number ";
    cin>>a;

    cout<<"The factorial of factorial "<<factorial(a);

    return 0;
}