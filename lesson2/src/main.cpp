#include <iostream>
#include "calculator.h"

using namespace std;

class Addcal:public Calculator
{
public:
    Addcal(int a,int b):Calculator(a,b){};
private:
    int calculate() override;
};

int Addcal::calculate() 
{
    return a + b;
}

class Mulitcal:public Calculator
{
public:
    Mulitcal(int a,int b):Calculator(a,b){};
private:
    int calculate() override;
};

int Mulitcal::calculate() 
{
    return a * b;
}

int main()
{
    int a = 0;
    int b = 0;
    cin >> a >> b;
    Calculator* calc1 = new Addcal(a,b);
    Calculator* calc2 = new Mulitcal(a,b);

    cout << calc1->calculate() << endl;
    cout << calc2->calculate() << endl;

    delete calc1;
    delete calc2;

    return 0;
}