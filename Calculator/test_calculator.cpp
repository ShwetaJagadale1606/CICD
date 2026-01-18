#include<iostream>
#include "calculator.h"
using namespace std;

int main()
{
    if(add(2,6)!=8)
    {
        return 1;
    }
    if(sub(8,3)!=5)
    {
        return 1;
    }
    if(mul(5,9)!=45)
    {
        return 1;
    }

    cout<<"All testcases successful!!!!!!";
    return 0;
}