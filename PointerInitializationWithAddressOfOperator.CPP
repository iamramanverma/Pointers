// Task: Initialize a pointer with the address of a variable and print the value it points to.
// Input: int num = 10; int* ptr = &num;
// Output: Value pointed to by ptr: 10
// ------------------------------------

#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    int* ptr = &num;
    cout<<"Value pointed to by ptr: "<<*ptr;

    return 0;
}
