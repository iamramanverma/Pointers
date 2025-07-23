// Task: Print both the address and value of a variable using a pointer.
// // Input: int a = 5; int* ptr = &a;
// // Output: Address: <memory_address>, Value: 5

// // ----------------------------

#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int* ptr = &a;
  
    cout<<"Address of ptr : "<<a<<endl;
    cout<<"Value pointed to by ptr : "<<*ptr<<endl;
    return 0;
}
