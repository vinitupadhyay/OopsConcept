#include <iostream>
#include <string.h>

using namespace std;

class Base
{
  private:
    int x,y;
    char *ch;
    
  public:
    Base()
    {
        cout << "In Base constructor" << endl;
    }
    
    Base(int x, int y, char *ch)
    {
        cout << "In Base parametrized constructor" << endl;
        this->x = x;
        this->y = y;
        this->ch = ch;
        //int len  = strlen(ch);
        //this->ch = new char[len];
        //strcpy(this->ch, ch);
    }
    
    ~Base()
    {
        cout << "In Base destructor" << endl;
    }
    
    Base(const Base & obj)
    {
       cout << "In Base copy constructor" << endl;
       x = obj.x;
       y = obj.y;
       int len  = strlen(obj.ch);
       ch = new char[len];
       strcpy(ch, obj.ch);
    }
    
    virtual void print()
    {
        cout << "Val1=> "<< x << " and val2=> " << y << endl;
        cout << "ValChar=> " << ch  << endl; 
    }
};



int main()
{
   //Base b1;
   //Base b2 = b1; // call copy constructor
   //Base b3;
   //b3=b2; // call = operator;
 
  //Base b4(10,20);
 //Base b5 = b4; // call copy constructor
 //b4.print();
 //b5.print();
 //Base b6;
 //b6 = b4;
 // b6.print();// call = operator
 
 Base b7(10,20, "vinit");
 b7.print();
 Base b8 = b7;
 b8.print();
}
