#include <iostream>

using namespace std;

class Calculator
{
public:
    Calculator(int a, int b) : a(a), b(b){};
    virtual ~Calculator(){};

    virtual int calculate() = 0;

protected:
    int a;
    int b;
};