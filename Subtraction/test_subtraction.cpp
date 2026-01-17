#include <cassert>
#include <iostream>
using namespace std;

int subtraction(int a, int b);

int main()
{
    assert(subtraction(6,9)==-3);

    assert(subtraction(8,5)==3);

    assert(subtraction(2,1)==1);

    assert(subtraction(7,4)==3);

    cout<<"All test cases pass!!!!!"<<endl;
    return 0;
}