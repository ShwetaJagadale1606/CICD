#include <cassert>
#include <iostream>
using namespace std;

// Declaration of function to test
int addition(int a, int b);

int main()
{
    // Test case 1
    assert(addition(2, 3) == 5);

    // Test case 2
    assert(addition(0, 0) == 0);

    // Test case 3
    assert(addition(-2, 3) == 1);

    // Test case 4
    assert(addition(-5, -5) == -10);

    cout << "All test cases passed!" << endl;
    return 0;
}
