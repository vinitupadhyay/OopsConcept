#include <iostream>

using namespace std;

class Base
{
	public:
		virtual void func1();
		void func2();
		void func3();
};

class Derived : public Base
{
	public:
		void func1();
		void func2();
		void func4();
};
	
void Base::func1()
{
	cout << "In Base::func1" << endl;
}

void Base::func2()
{
	cout << "In Base::func2" << endl;
}

void Base::func3()
{
	cout << "In Base::func3" << endl;
}

void Derived::func1()
{
	cout << "In Derived::func1" << endl;
}

void Derived::func2()
{
	cout << "In Derived::func2" << endl;
}

void Derived::func4()
{
	cout << "In Derived::func4" << endl;
}

int main()
{
	//Base b;
	//b.func1();
	
	//Derived d;
	//d.func1();
	
	//Base *bPtr = new Base();
	//bPtr->func1();
	
	//Derived *dPtr = new Derived();
	//dPtr->func1();
	
	//Base *bPtr_d  = new Derived();
	//bPtr_d->func1();
	
	//invalid conversion from Base* -> Derived* at compile time
	//Derived *dPtr_b = new Base();
	//dPtr_b->func1();
	
	//Base b2;
	//b2.func2();
	
	//Derived d2;
	//d2.func2();
	
	//Base *bPtr2 = new Base();
	//bPtr2->func2();
	
	// here func2 of base class will get called. The reason behind that is func2 is non virtul function
	// so its definition get resolve at compile time and at compile time type of object is Base class
	//Base *bPtr_d2 = new Derived();
	//bPtr_d2->func2();
	
	//Derived *dPtr2 = new Derived();
	//dPtr2->func2();
	
	Base *bptr3 = new Base();
	bptr3->func3();
	
	Base *bPtr_d3 = new Derived();
	bPtr_d3->func3();
	//here we get compile time error because there is no any function func4 in Base class
	//bPtr_d3->func4();
}
