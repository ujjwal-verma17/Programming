#include <iostream>
using namespace std;
// base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}         // default construction called by programmer 
};
// derived class syntax
/*
class {{derived-class-name}} : {{visibility -mode}} {{base-class-name}}
{
    members/methods/etc...
}
Note -
1. defaULT VISIBILTY MODE IS PRIVATE
2.Public visibilty mode : public members of base class becomes public members of derived class
3. Private visibilty Mode : Public members of base class becomes private members of the derived class
4. private members are never inherited
*/
class Programmer : public Employee           //by default private
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData(){
        cout<<id<<endl;
    }

};
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl; // it is only making sense bcoz during inheritance public is mention
    skillF.getData();
    return 0;
}