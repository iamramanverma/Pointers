// Task: Print the address of a variable using the address-of operator.
// Input: int num = 25;
// Output: Address of num: <memory_address>
// -----------------------

#include <iostream>
using namespace std;
int main()
{
    int num = 25;
    
    cout<<"Address of num: "<<&num<<endl;

    return 0;
}
