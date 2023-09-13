//friend class  

#include <iostream>
using namespace std;
// forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex, complex); // we cannot write complex o1 ,complex 02 as it is not declared yet
    int sumImagineComlpex( complex , complex );
};

class complex
{
    int a, b;
    // individually declaring as friends (will become tough as function will increase)
    // friend int calculator ::sumRealComplex(complex o1, complex o2);
    // friend int calculator ::sumImagineComlpex (complex o1 , complex o2);
    
    
    //Alter : declaring entire class as a friend
    friend class calculator;



public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumImagineComlpex(complex o1 , complex o2){
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is  " << res << endl;
    int res2 = calc.sumImagineComlpex(o1 , o2);
    cout << "The sum of imaginary part of o1 and o2 is  " << res2 << endl;


    return 0;
}