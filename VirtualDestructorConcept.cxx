#include <iostream>

using namespace std;

class Base
{
  public:
    Base()
    {
        cout << "In Base constructor" << endl;
    }
    
    virtual ~Base()
    {
        cout << "In Base destructor" << endl;
    }
    
    virtual void func1()
    {
        cout << "In Base::func1" << endl;
    }
};

class Derived : public Base
{
  public:
    Derived()
    {
        cout << "In Derived constructor" << endl;
    }
    
    ~Derived()
    {
        cout << "In Derived destructor" << endl;
    }
    
    void func1()
    {
        cout << "In Base::func1" << endl;
    }
};

int main()
{
    //Base b; // BaseConstructor -> BaseDestructor
   // Derived d; // BaseContructor->DerivedConstructor->DerivedDistructor->BaseDestructor
    
    //Base *ptr  = new Base(); // BaseConstructor
    
    //delete ptr; // BaseConstructor -> BaseDestructor
    //Base *ptr2 = new Derived(); //BaseContructor->DerivedConstructor
    
    // With Virtual Destructor - BaseContructor->DerivedConstructor->DerivedDistructor->BaseDestructor
    // Without virtual destructor - BaseContructor->DerivedConstructor->DerivedDistructor
    //delete ptr2; 
}
