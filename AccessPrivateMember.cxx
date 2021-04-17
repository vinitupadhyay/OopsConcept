#include <iostream>

using namespace std;

class A 
{
  public:
    virtual void f1()
    {
        cout << "In A::f1" << endl;
    }
  private:
};

class B : public A 
{
    public:
       
    private:
    void f1()
    {
        cout << "In B::f1" << endl;
    }
    
    void f2()
    {
        cout << "In B::f2" << endl;
    }
};

int main()
{
    A *a = new B();
    a->f1(); //Type and scope of pointer gets resolved at compile time.
    
    B b;
   // b.f2(); // Error
}
