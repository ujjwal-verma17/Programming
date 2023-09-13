#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);
    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(int x, int y) // parametrized constructor takes value here it is taking 2 parameter
{
    a = x;
    b = y;
}
int main()
{
    // Implicit call
    Complex a(4, 6);
    // explicit call
    Complex b = Complex(5, 7);
    a.printnumber();
    b.printnumber();

    return 0;
}