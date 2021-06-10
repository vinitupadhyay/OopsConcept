#include <iostream>

using namespace std;

int main()
{
   const int val = 10;
   const int *ptr = &val;
   
   int *ptr1 = const_cast<int*> (ptr);
   *ptr1 = 20;
   
   cout << ptr1 << endl << &val << endl;
   cout << *ptr1 << endl << val << endl;

    return 0;
}
